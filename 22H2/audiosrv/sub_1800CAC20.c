/*
 * XREFs of sub_1800CAC20 @ 0x1800CAC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C6940 @ 0x1800C6940 (sub_1800C6940.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CAC20(__int64 a1, _WORD *a2, void (__fastcall **a3)(_QWORD, __int64 *))
{
  void (__fastcall **v3)(_QWORD, __int64 *); // r13
  __int64 v5; // rsi
  int v6; // edi
  struct _RTL_CRITICAL_SECTION *v7; // r15
  struct _RTL_CRITICAL_SECTION *v8; // r14
  __int64 v9; // rax
  int *v11; // rbx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+20h] [rbp-78h]
  ATL::CAtlException *v13; // [rsp+30h] [rbp-68h] BYREF
  void (__fastcall **v14[12])(_QWORD, __int64 *); // [rsp+38h] [rbp-60h] BYREF

  v3 = a3;
  v5 = a1;
  v6 = 0;
  if ( (unsigned int)sub_1800C6940((unsigned __int16 **)(a1 + 328), (__int64)a2) )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)(v5 + 352);
    v8 = (struct _RTL_CRITICAL_SECTION *)(v5 + 352);
    v12 = (struct _RTL_CRITICAL_SECTION *)(v5 + 352);
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 352));
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
    }
    else
    {
      LODWORD(v9) = 0;
    }
    try
    {
      sub_18002BB70((__int64 *)(v5 + 328), a2, v9);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v11 = (int *)v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        o__resetstkoflw();
      v5 = a1;
      v3 = a3;
      v6 = *v11;
      v8 = v12;
      v7 = v12;
    }
    if ( v7 )
      LeaveCriticalSection(v8);
    if ( v6 < 0 )
    {
      sub_18005E8F8((__int64)"CAudioSession::SetIconPath", 384, v6);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v14[0] = (void (__fastcall **)(_QWORD, __int64 *))off_180155248;
      v14[1] = (void (__fastcall **)(_QWORD, __int64 *))v5;
      v14[2] = *(void (__fastcall ***)(_QWORD, __int64 *))(v5 + 328);
      v14[3] = v3;
      sub_18002E440((LPCRITICAL_SECTION)(v5 + 496), v14);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return (unsigned int)v6;
}
