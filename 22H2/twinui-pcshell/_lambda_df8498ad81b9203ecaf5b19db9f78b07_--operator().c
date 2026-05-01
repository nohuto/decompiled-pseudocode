/*
 * XREFs of _lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator() @ 0x180041890
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___::Run @ 0x180044900 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07___--Run.c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x180010D1C (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0zqtq_EventWriteTransfer @ 0x1801F3824 (McTemplateU0zqtq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()(char *a1)
{
  enum _TABLETMODESTATE *v2; // rdx
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned int i; // ebx
  __int64 v8; // rcx
  void *v9; // rcx
  int v10; // edx
  int v11; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+20h] BYREF

  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(*(_QWORD *)a1 + 24LL) + 32LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 24LL),
    &pv);
  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v5 = 0LL;
    do
    {
      v6 = *(_QWORD *)(v4 + 8);
      v11 = 0;
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v11, v2);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0zqtq_EventWriteTransfer((unsigned __int8)a1[8], v10, (_DWORD)pv, *(_DWORD *)(v6 + v5), a1[8], v11);
      }
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(*(_QWORD *)a1 + 32LL) + 24LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 32LL),
             &v12) >= 0 )
      {
        for ( i = 0; i < v12; ++i )
        {
          v13 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(*(_QWORD *)a1 + 32LL) + 32LL))(
                 *(_QWORD *)(*(_QWORD *)a1 + 32LL),
                 i,
                 &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7,
                 &v13) >= 0 )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 24LL))(
              v13,
              *(_QWORD *)(*(_QWORD *)a1 + 24LL),
              *(unsigned int *)(v6 + v5),
              *(_QWORD *)(v6 + v5 + 8));
          v8 = v13;
          if ( v13 )
          {
            v13 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
        }
      }
      ++v3;
      v5 += 16LL;
      v4 = *(_QWORD *)a1;
    }
    while ( v3 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) );
  }
  v9 = pv;
  pv = 0LL;
  CoTaskMemFree(v9);
}
