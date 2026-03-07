__int64 __fastcall GreUpdateSharedDevCaps(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v1 = SGDGetSessionState();
  vGetDeviceCaps((struct PDEVOBJ *)&v3, *(struct _DEVCAPS **)(*(_QWORD *)(v1 + 24) + 1920LL));
  return 1LL;
}
