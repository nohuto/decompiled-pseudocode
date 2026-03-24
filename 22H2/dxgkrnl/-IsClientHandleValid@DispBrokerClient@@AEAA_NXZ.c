/*
 * XREFs of ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1C0167808
 * Callers:
 *     _lambda_d7c4861ef0734605370a98f05df27570_::operator() @ 0x1C01674D4 (_lambda_d7c4861ef0734605370a98f05df27570_--operator().c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C0167790 (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DispBrokerClient::IsClientHandleValid(DispBrokerClient *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v10 = 0;
    v9 = 0LL;
    v3 = ZwAlpcQueryInformation(*(_QWORD *)(v2 + 8), 0LL, &v9, 16LL, &v10);
    v6 = v3;
    if ( v3 >= 0 && v10 == 16 )
      return 1;
    v8 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v8 + 24) = **(unsigned int **)this;
    *(_QWORD *)(v8 + 32) = v6;
    WdLogEvent5_WdError(v8);
  }
  return 0;
}
