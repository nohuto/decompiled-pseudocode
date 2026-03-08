/*
 * XREFs of IcAddSecondaryIcInstance @ 0x1C009EBC4
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00ABA48 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 IcAddSecondaryIcInstance()
{
  int v0; // eax
  unsigned int v1; // ebx
  int v2; // edi
  unsigned int v3; // esi
  _DWORD *Pool2; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _OWORD v8[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+80h] [rbp+8h] BYREF

  memset(v8, 0, sizeof(v8));
  v10 = 56;
  v9 = 0LL;
  v0 = ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, int *))HalDispatchTable->HalQuerySystemInformation)(
         28LL,
         56LL,
         v8,
         &v10);
  v1 = 0;
  if ( v0 < 0 )
    return (unsigned int)v0;
  v2 = DWORD1(v8[0]);
  if ( !DWORD2(v8[0]) || !DWORD1(v8[0]) )
    return (unsigned int)-1073741811;
  v3 = DWORD2(v8[0]) + DWORD1(v8[0]);
  if ( (unsigned int)(DWORD2(v8[0]) + DWORD1(v8[0])) < DWORD1(v8[0]) )
    return (unsigned int)-1073741675;
  if ( v3 < 0xFFF00000 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(200 * (DWORD2(v8[0]) - 1) + 232), 1232102209LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      Pool2[4] = v2;
      Pool2[7] = 4;
      Pool2[5] = v3 - 1;
      v6 = (_QWORD *)qword_1C006E5D8;
      if ( *(__int64 **)qword_1C006E5D8 != &IcListHead )
        __fastfail(3u);
      *v5 = &IcListHead;
      v5[1] = v6;
      *v6 = v5;
      qword_1C006E5D8 = (__int64)v5;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
