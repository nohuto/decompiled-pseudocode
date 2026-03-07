__int64 __fastcall HalpInterruptSendIpi(_DWORD *a1, unsigned int a2)
{
  int v4; // ecx
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, int *, __int128 *, _QWORD, int *); // rax
  __int64 result; // rax
  unsigned int v9; // ebp
  unsigned int *v10; // r12
  unsigned __int64 v11; // rbp
  int v12; // r13d
  unsigned __int8 v13; // r15
  __int64 (__fastcall *v14)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  int v15; // eax
  __int16 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  int v22; // eax
  __int64 (__fastcall *v23)(_QWORD, int *, __int128 *, _QWORD, int *); // rax
  int v24; // eax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-2F8h] BYREF
  int v26; // [rsp+38h] [rbp-2F0h] BYREF
  int v27; // [rsp+3Ch] [rbp-2ECh]
  int v28; // [rsp+40h] [rbp-2E8h] BYREF
  int v29; // [rsp+44h] [rbp-2E4h]
  __int128 v30; // [rsp+48h] [rbp-2E0h] BYREF
  int v31; // [rsp+58h] [rbp-2D0h]
  _DWORD v32[2]; // [rsp+60h] [rbp-2C8h] BYREF
  _DWORD v33[2]; // [rsp+68h] [rbp-2C0h] BYREF
  _DWORD v34[2]; // [rsp+70h] [rbp-2B8h] BYREF
  _DWORD v35[2]; // [rsp+78h] [rbp-2B0h] BYREF
  __int128 v36; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v37; // [rsp+90h] [rbp-298h]
  __int128 v38; // [rsp+98h] [rbp-290h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-280h]
  __int128 v40; // [rsp+B0h] [rbp-278h] BYREF
  _QWORD v41[34]; // [rsp+C0h] [rbp-268h] BYREF
  _QWORD v42[34]; // [rsp+1D0h] [rbp-158h] BYREF
  int v43; // [rsp+320h] [rbp-8h]

  memset(v41, 0, 0x108uLL);
  v4 = *a1;
  v5 = v41;
  LODWORD(v39) = 0;
  v38 = 0LL;
  switch ( v4 )
  {
    case 6:
      v6 = 3LL * (unsigned int)a1[2];
      v38 = *(_OWORD *)(HalpInterruptTargets + 24LL * (unsigned int)a1[2]);
      v39 = *(_QWORD *)(HalpInterruptTargets + 8 * v6 + 16);
      break;
    case 1:
    case 2:
      v5 = (__int64 *)*((_QWORD *)a1 + 1);
      if ( v4 != 1 )
        goto LABEL_15;
      LODWORD(v41[0]) = 2097153;
      memset((char *)v41 + 4, 0, 0x104uLL);
      v19 = *((unsigned __int16 *)v5 + 4);
      v20 = *v5;
      if ( (_WORD)v19 )
      {
        if ( WORD1(v41[0]) <= (unsigned __int16)v19 )
        {
LABEL_47:
          v5 = v41;
          goto LABEL_15;
        }
        LOWORD(v41[0]) = v19 + 1;
      }
      v41[v19 + 1] |= v20;
      goto LABEL_47;
    case 3:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x10) == 0 || HalpInterruptNoShorthand )
      {
        LODWORD(v41[0]) = 2097153;
        memset((char *)v41 + 4, 0, 0x104uLL);
        KiCopyAffinityEx(v41, 32LL, &KeActiveProcessors);
        goto LABEL_15;
      }
      LODWORD(v38) = 1;
      break;
    case 4:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x20) == 0 || HalpInterruptNoShorthand )
      {
        LODWORD(v41[0]) = 2097153;
        memset((char *)v41 + 4, 0, 0x104uLL);
        KiCopyAffinityEx(v41, 32LL, &KeActiveProcessors);
        LODWORD(v18) = KeGetPcr()->Prcb.Number;
        KeRemoveProcessorAffinityEx(v41, v18);
        goto LABEL_15;
      }
      LODWORD(v38) = 2;
      break;
    case 5:
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
      {
        LODWORD(v38) = 3;
        break;
      }
      LODWORD(v41[0]) = 2097153;
      memset((char *)v41 + 4, 0, 0x104uLL);
      LODWORD(v17) = KeGetPcr()->Prcb.Number;
      KeAddProcessorAffinityEx(v41, v17);
LABEL_15:
      v37 = 0LL;
      ProcNumber = 0;
      v40 = 0LL;
      v36 = 0LL;
      memset(&v42[1], 0, 0x100uLL);
      v31 = 0;
      v9 = 0;
      v30 = 0LL;
      if ( qword_140C621C8 )
        return (unsigned int)qword_140C621C8(v5, a2);
      LODWORD(v42[0]) = 2097153;
      memset((char *)v42 + 4, 0, 0x104uLL);
      KiAndAffinityEx(&HalpInterruptPhysicalTargets, v5, v42, 32LL);
      if ( HalpInterruptClusterModeEnabled )
      {
        v10 = (unsigned int *)HalpInterruptClusterData;
        ProcNumber = 0;
        if ( HalpInterruptClusterData < (unsigned __int64)HalpInterruptClusterDataEnd )
        {
          do
          {
            if ( (unsigned int)KeAndGroupAffinityEx(v5, v10 + 2, &v40) )
            {
              v11 = v40;
              v12 = 0;
              LODWORD(v30) = 6;
              v13 = 0;
              *((_QWORD *)&v30 + 1) = *v10;
              ProcNumber.Group = WORD4(v40);
              for ( ProcNumber.Number = 0; v11; ProcNumber.Number = v13 )
              {
                if ( (v11 & 1) != 0 )
                {
                  v12 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(&ProcNumber) + 12);
                  HIDWORD(v30) = v12;
                }
                ++v13;
                v11 >>= 1;
              }
              v32[0] = -1;
              v32[1] = 1;
              v33[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
              v33[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
              v14 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController
                                                                                             + 120);
              _disable();
              v15 = v14(*(_QWORD *)(HalpInterruptController + 16), v33, &v30, a2, v32);
              v9 = v15;
              if ( (v43 & 0x200) != 0 )
                _enable();
              if ( v15 < 0 )
                return v9;
            }
            v10 += 6;
          }
          while ( (unsigned __int64)v10 < HalpInterruptClusterDataEnd );
        }
      }
      else if ( !HalpInterruptPhysicalModeOnly )
      {
        *((_QWORD *)&v36 + 1) = v5[1];
        LODWORD(v30) = 5;
        DWORD2(v30) = 0;
        *(_QWORD *)&v36 = v5;
        while ( !(unsigned int)KeEnumerateNextProcessor(&ProcNumber, &v36) )
        {
          if ( *(_DWORD *)(HalpInterruptTargets + 24LL * *(unsigned int *)&ProcNumber) == 5 )
            DWORD2(v30) |= *(_DWORD *)(HalpInterruptTargets + 24LL * *(unsigned int *)&ProcNumber + 8);
        }
        if ( DWORD2(v30) )
        {
          v34[0] = -1;
          v34[1] = 1;
          v35[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v35[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v21 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
          _disable();
          v22 = v21(*(_QWORD *)(HalpInterruptController + 16), v35, &v30, a2, v34);
          v16 = v43;
          v9 = v22;
          if ( (v43 & 0x200) != 0 )
            _enable();
          if ( v22 < 0 )
            return v9;
          goto LABEL_33;
        }
      }
      v16 = v43;
LABEL_33:
      *((_QWORD *)&v36 + 1) = v42[1];
      *(_QWORD *)&v36 = v42;
      ProcNumber = 0;
      LOWORD(v37) = 0;
      do
      {
        if ( (unsigned int)KeEnumerateNextProcessor(&ProcNumber, &v36) )
          break;
        LODWORD(v30) = 4;
        v26 = -1;
        v27 = 1;
        DWORD2(v30) = *(_DWORD *)(HalpInterruptTargets + 24LL * *(unsigned int *)&ProcNumber + 8);
        v29 = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v28 = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v23 = *(__int64 (__fastcall **)(_QWORD, int *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
        _disable();
        v24 = v23(*(_QWORD *)(HalpInterruptController + 16), &v28, &v30, a2, &v26);
        v9 = v24;
        if ( (v16 & 0x200) != 0 )
          _enable();
      }
      while ( v24 >= 0 );
      return v9;
    default:
      return 3221225485LL;
  }
  v28 = -1;
  v29 = 1;
  v27 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v26 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v7 = *(__int64 (__fastcall **)(_QWORD, int *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
  _disable();
  result = v7(*(_QWORD *)(HalpInterruptController + 16), &v26, &v38, a2, &v28);
  if ( (v43 & 0x200) != 0 )
    _enable();
  return result;
}
