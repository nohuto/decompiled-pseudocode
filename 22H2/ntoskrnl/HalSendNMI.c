/*
 * XREFs of HalSendNMI @ 0x1404BDCC0
 * Callers:
 *     HalpNmiReboot @ 0x1404D2BC8 (HalpNmiReboot.c)
 *     KiSendFreeze @ 0x14051E0C0 (KiSendFreeze.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140344E90 (KeGetProcessorIndexFromNumber.c)
 *     KeAndGroupAffinityEx @ 0x140374E80 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall HalSendNMI(__int64 a1)
{
  __int16 v2; // r13
  int v3; // r12d
  unsigned __int16 v4; // ax
  unsigned __int8 v5; // bp
  unsigned __int16 i; // dx
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int *v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  int v12; // r15d
  bool v13; // zf
  __int64 (__fastcall *v14)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *); // rax
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // r8
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *); // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  __int64 (__fastcall *v22)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *); // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-168h] BYREF
  __int128 v24; // [rsp+38h] [rbp-160h] BYREF
  __int64 v25; // [rsp+48h] [rbp-150h]
  __int64 v26; // [rsp+50h] [rbp-148h]
  _DWORD v27[2]; // [rsp+58h] [rbp-140h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-138h] BYREF
  _DWORD v29[4]; // [rsp+68h] [rbp-130h] BYREF
  __int64 v30; // [rsp+78h] [rbp-120h] BYREF
  __int64 v31; // [rsp+80h] [rbp-118h] BYREF
  __int64 v32; // [rsp+88h] [rbp-110h] BYREF
  __int128 v33; // [rsp+90h] [rbp-108h] BYREF
  unsigned __int16 v34; // [rsp+A0h] [rbp-F8h]
  _WORD v35[87]; // [rsp+A2h] [rbp-F6h] BYREF
  int v36; // [rsp+190h] [rbp-8h]

  v26 = 0x2FFFFFFFFLL;
  _disable();
  v2 = v36;
  v3 = v36 & 0x200;
  v33 = 0LL;
  memset(v35, 0, 0xA6uLL);
  v25 = 0LL;
  v4 = *(_WORD *)a1;
  v24 = 0LL;
  if ( (unsigned __int16)HalpInterruptPhysicalTargets < v4 )
    v4 = HalpInterruptPhysicalTargets;
  v5 = 0;
  v34 = v4;
  for ( i = 0; i < v34; *(_QWORD *)&v35[4 * v7 + 3] = qword_140C4BA68[v7] & *(_QWORD *)(a1 + 8 * v7 + 8) )
    v7 = i++;
  result = 20LL;
  *(_DWORD *)&v35[1] = 0;
  v35[0] = 20;
  if ( i < 0x14u )
  {
    do
    {
      result = i++;
      *(_QWORD *)&v35[4 * result + 3] = 0LL;
    }
    while ( i < v35[0] );
  }
  if ( !HalpInterruptClusterModeEnabled )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v16 = 0;
      LODWORD(v24) = 5;
      DWORD2(v24) = 0;
      while ( 1 )
      {
        while ( v15 )
        {
          _BitScanForward64((unsigned __int64 *)&v17, v15);
          v15 &= ~(1LL << v17);
          result = 3LL * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v16 + (unsigned __int8)v17];
          if ( *(_DWORD *)(HalpInterruptTargets
                         + 24LL * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v16 + (unsigned __int8)v17]) == 5 )
          {
            result = *(unsigned int *)(HalpInterruptTargets
                                     + 24LL
                                     * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v16
                                                                                        + (unsigned __int8)v17]
                                     + 8);
            DWORD2(v24) |= result;
          }
        }
        if ( ++v16 >= *(_WORD *)a1 )
          break;
        result = v16;
        v15 = *(_QWORD *)(a1 + 8LL * v16 + 8);
      }
      if ( DWORD2(v24) )
      {
        v28[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v28[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v31 = v26;
        v18 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *))(HalpInterruptController + 120);
        _disable();
        result = v18(*(_QWORD *)(HalpInterruptController + 16), v28, &v24, 0LL, &v31);
        if ( (v2 & 0x200) != 0 )
          _enable();
        if ( (int)result < 0 )
          goto LABEL_41;
      }
    }
    goto LABEL_33;
  }
  v9 = (unsigned int *)HalpInterruptClusterData;
  ProcNumber = 0;
  if ( HalpInterruptClusterData >= (unsigned __int64)HalpInterruptClusterDataEnd )
  {
LABEL_33:
    v19 = *(_QWORD *)&v35[3];
    LOWORD(v20) = 0;
    do
    {
      while ( !v19 )
      {
        v20 = (unsigned __int16)(v20 + 1);
        if ( (unsigned int)v20 >= v34 )
          goto LABEL_41;
        v19 = *(_QWORD *)&v35[4 * v20 + 3];
      }
      _BitScanForward64(&v21, v19);
      LODWORD(v24) = 4;
      v19 &= ~(1LL << v21);
      DWORD2(v24) = *(_DWORD *)(HalpInterruptTargets
                              + 24LL
                              * (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v20
                                                                                 + (unsigned __int8)v21]
                              + 8);
      v29[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v29[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v22 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *))(HalpInterruptController + 120);
      v32 = v26;
      _disable();
      result = v22(*(_QWORD *)(HalpInterruptController + 16), v29, &v24, 0LL, &v32);
      if ( (v2 & 0x200) != 0 )
        _enable();
    }
    while ( (int)result >= 0 );
    goto LABEL_41;
  }
  v10 = v26;
  while ( 1 )
  {
    result = KeAndGroupAffinityEx((_WORD *)a1, (__int64)(v9 + 2), (char *)&v33);
    if ( (_DWORD)result )
    {
      v11 = v33;
      v12 = 0;
      LODWORD(v24) = 6;
      v13 = (_QWORD)v33 == 0LL;
      *((_QWORD *)&v24 + 1) = *v9;
      ProcNumber.Group = WORD4(v33);
      while ( 1 )
      {
        ProcNumber.Number = v5;
        if ( v13 )
          break;
        if ( (v11 & 1) != 0 )
        {
          v12 |= *(_DWORD *)(HalpInterruptTargets + 24LL * KeGetProcessorIndexFromNumber(&ProcNumber) + 12);
          HIDWORD(v24) = v12;
        }
        ++v5;
        v11 >>= 1;
        v13 = v11 == 0;
      }
      v30 = v10;
      v27[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v27[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v14 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, __int64 *))(HalpInterruptController + 120);
      _disable();
      result = v14(*(_QWORD *)(HalpInterruptController + 16), v27, &v24, 0LL, &v30);
      if ( (v2 & 0x200) != 0 )
        _enable();
      v5 = 0;
      if ( (int)result < 0 )
        break;
    }
    v9 += 6;
    if ( (unsigned __int64)v9 >= HalpInterruptClusterDataEnd )
      goto LABEL_33;
  }
LABEL_41:
  if ( v3 )
    _enable();
  return result;
}
