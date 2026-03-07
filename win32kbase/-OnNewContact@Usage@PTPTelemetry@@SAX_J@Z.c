void __fastcall PTPTelemetry::Usage::OnNewContact(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( *(_QWORD *)(v5 + 11976) < *(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 3568) )
    *(_QWORD *)(v5 + 11976) = a1;
}
