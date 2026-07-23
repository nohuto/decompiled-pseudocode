/*
 * XREFs of HalpInterruptSendIpi @ 0x1402201D0
 * Callers:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 *     KiForwardTick @ 0x140227F90 (KiForwardTick.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 *     HalRequestIpiSpecifyVector @ 0x1403443F0 (HalRequestIpiSpecifyVector.c)
 *     HalSendSoftwareInterrupt @ 0x14035E940 (HalSendSoftwareInterrupt.c)
 *     HalRequestDeferredRecoveryServiceInterrupt @ 0x1404BDC80 (HalRequestDeferredRecoveryServiceInterrupt.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140229340 (KeAddProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1402BBAE0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402BBB30 (KeRemoveProcessorAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140344E90 (KeGetProcessorIndexFromNumber.c)
 *     KeAndGroupAffinityEx @ 0x140374E80 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall HalpInterruptSendIpi(_DWORD *a1, unsigned int a2)
{
  int v4; // ecx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  __int64 result; // rax
  int v9; // r13d
  unsigned int v10; // edi
  unsigned __int16 v11; // cx
  unsigned __int16 i; // ax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int16 v15; // r14
  unsigned __int64 v16; // r9
  unsigned __int16 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  int v23; // eax
  unsigned int *v24; // r12
  unsigned __int64 v25; // rdi
  unsigned __int8 v26; // si
  __int64 (__fastcall *v27)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 (__fastcall *v34)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *); // rax
  int v35; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-238h] BYREF
  __int128 v37; // [rsp+38h] [rbp-230h] BYREF
  __int64 v38; // [rsp+48h] [rbp-220h]
  _DWORD v39[2]; // [rsp+50h] [rbp-218h] BYREF
  _DWORD v40[2]; // [rsp+58h] [rbp-210h] BYREF
  _DWORD v41[2]; // [rsp+60h] [rbp-208h] BYREF
  _DWORD v42[2]; // [rsp+68h] [rbp-200h] BYREF
  _DWORD v43[2]; // [rsp+70h] [rbp-1F8h] BYREF
  _DWORD v44[2]; // [rsp+78h] [rbp-1F0h] BYREF
  _DWORD v45[2]; // [rsp+80h] [rbp-1E8h] BYREF
  _DWORD v46[2]; // [rsp+88h] [rbp-1E0h] BYREF
  __int128 v47; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-1C8h]
  __int128 v49; // [rsp+B0h] [rbp-1B8h] BYREF
  _QWORD v50[22]; // [rsp+C0h] [rbp-1A8h] BYREF
  unsigned __int16 v51; // [rsp+170h] [rbp-F8h]
  _WORD v52[87]; // [rsp+172h] [rbp-F6h] BYREF
  int v53; // [rsp+260h] [rbp-8h]

  memset(v50, 0, 0xA8uLL);
  v4 = *a1;
  v5 = v50;
  v48 = 0LL;
  v47 = 0LL;
  switch ( v4 )
  {
    case 6:
      v6 = 3LL * (unsigned int)a1[2];
      v47 = *(_OWORD *)(HalpInterruptTargets + 24LL * (unsigned int)a1[2]);
      v48 = *(_QWORD *)(HalpInterruptTargets + 8 * v6 + 16);
      break;
    case 2:
    case 1:
      v5 = (__int64 *)*((_QWORD *)a1 + 1);
      if ( v4 == 1 )
      {
        LODWORD(v50[0]) = 1310721;
        memset((char *)v50 + 4, 0, 0xA4uLL);
        v31 = *((unsigned __int16 *)v5 + 4);
        v32 = *v5;
        if ( (_WORD)v31 )
          LOWORD(v50[0]) = v31 + 1;
        v50[v31 + 1] |= v32;
        v5 = v50;
      }
      goto LABEL_7;
    case 3:
      if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x10) == 0 || HalpInterruptNoShorthand )
      {
        KeCopyAffinityEx(v50, &KeActiveProcessors);
        goto LABEL_7;
      }
      LODWORD(v47) = 1;
      break;
    case 4:
      if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x20) != 0 && !HalpInterruptNoShorthand )
      {
        LODWORD(v47) = 2;
        break;
      }
      KeCopyAffinityEx(v50, &KeActiveProcessors);
      LODWORD(v30) = KeGetPcr()->Prcb.Number;
      KeRemoveProcessorAffinityEx(v50, v30);
LABEL_7:
      v49 = 0LL;
      memset(v52, 0, 0xA6uLL);
      v9 = 0;
      v38 = 0LL;
      v10 = 0;
      v37 = 0LL;
      if ( qword_140C4A2A8 )
      {
        return (unsigned int)qword_140C4A2A8(v5, a2);
      }
      else
      {
        v11 = HalpInterruptPhysicalTargets;
        if ( (unsigned __int16)HalpInterruptPhysicalTargets >= *(_WORD *)v5 )
          v11 = *(_WORD *)v5;
        v51 = v11;
        for ( i = 0; i < v51; *(_QWORD *)&v52[4 * v13 + 3] = qword_140C4BA68[v13] & v5[v13 + 1] )
          v13 = i++;
        v52[0] = 20;
        *(_DWORD *)&v52[1] = 0;
        if ( i < 0x14u )
        {
          do
          {
            v14 = i++;
            *(_QWORD *)&v52[4 * v14 + 3] = 0LL;
          }
          while ( i < v52[0] );
        }
        v15 = v53;
        if ( HalpInterruptClusterModeEnabled )
        {
          v24 = (unsigned int *)HalpInterruptClusterData;
          ProcNumber = 0;
          if ( HalpInterruptClusterData < (unsigned __int64)HalpInterruptClusterDataEnd )
          {
            do
            {
              if ( (unsigned int)KeAndGroupAffinityEx(v5, v24 + 2, &v49) )
              {
                v25 = v49;
                v26 = 0;
                LODWORD(v37) = 6;
                *((_QWORD *)&v37 + 1) = *v24;
                ProcNumber.Group = WORD4(v49);
                for ( ProcNumber.Number = 0; v25; ProcNumber.Number = v26 )
                {
                  if ( (v25 & 1) != 0 )
                  {
                    v9 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(&ProcNumber) + 12);
                    HIDWORD(v37) = v9;
                  }
                  ++v26;
                  v25 >>= 1;
                }
                v39[0] = -1;
                v39[1] = 1;
                v40[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
                v40[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
                v27 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController
                                                                                               + 120);
                _disable();
                v28 = v27(*(_QWORD *)(HalpInterruptController + 16), v40, &v37, a2, v39);
                v10 = v28;
                if ( (v15 & 0x200) != 0 )
                  _enable();
                if ( v28 < 0 )
                  return v10;
                v9 = 0;
              }
              v24 += 6;
            }
            while ( (unsigned __int64)v24 < HalpInterruptClusterDataEnd );
          }
        }
        else if ( !HalpInterruptPhysicalModeOnly )
        {
          v16 = v5[1];
          v17 = 0;
          LODWORD(v37) = 5;
          DWORD2(v37) = 0;
          while ( v16 )
          {
LABEL_18:
            _BitScanForward64(&v18, v16);
            v16 &= ~(1LL << v18);
            v19 = (unsigned __int8)v18 + (v17 << 6);
            if ( *(_DWORD *)(HalpInterruptTargets + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v19]) == 5 )
              DWORD2(v37) |= *(_DWORD *)(HalpInterruptTargets
                                       + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[v19]
                                       + 8);
          }
          while ( ++v17 < *(_WORD *)v5 )
          {
            v16 = v5[v17 + 1];
            if ( v16 )
              goto LABEL_18;
          }
          if ( DWORD2(v37) )
          {
            v41[0] = -1;
            v41[1] = 1;
            v42[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
            v42[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
            v22 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController
                                                                                           + 120);
            _disable();
            v23 = v22(*(_QWORD *)(HalpInterruptController + 16), v42, &v37, a2, v41);
            v10 = v23;
            if ( (v15 & 0x200) != 0 )
              _enable();
            if ( v23 < 0 )
              return v10;
          }
        }
        v20 = *(_QWORD *)&v52[3];
        LOWORD(v21) = 0;
        while ( v20 )
        {
LABEL_66:
          _BitScanForward64(&v33, v20);
          LODWORD(v37) = 4;
          v20 &= ~(1LL << v33);
          DWORD2(v37) = *(_DWORD *)(HalpInterruptTargets
                                  + 24LL
                                  * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v21
                                                                                     + (unsigned __int8)v33]
                                  + 8);
          v44[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v44[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v34 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
          v43[0] = -1;
          v43[1] = 1;
          _disable();
          v35 = v34(*(_QWORD *)(HalpInterruptController + 16), v44, &v37, a2, v43);
          v10 = v35;
          if ( (v15 & 0x200) != 0 )
            _enable();
          if ( v35 < 0 )
            return v10;
        }
        while ( 1 )
        {
          v21 = (unsigned __int16)(v21 + 1);
          if ( (unsigned int)v21 >= v51 )
            break;
          v20 = *(_QWORD *)&v52[4 * v21 + 3];
          if ( v20 )
            goto LABEL_66;
        }
      }
      return v10;
    case 5:
      if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x40) == 0 || HalpInterruptNoShorthand )
      {
        LODWORD(v50[0]) = 1310721;
        memset((char *)v50 + 4, 0, 0xA4uLL);
        LODWORD(v29) = KeGetPcr()->Prcb.Number;
        KeAddProcessorAffinityEx(v50, v29);
        goto LABEL_7;
      }
      LODWORD(v47) = 3;
      break;
    default:
      return 3221225485LL;
  }
  v45[0] = -1;
  v45[1] = 1;
  v46[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v46[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v7 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, _DWORD *))(HalpInterruptController + 120);
  _disable();
  result = v7(*(_QWORD *)(HalpInterruptController + 16), v46, &v47, a2, v45);
  if ( (v53 & 0x200) != 0 )
    _enable();
  return result;
}
