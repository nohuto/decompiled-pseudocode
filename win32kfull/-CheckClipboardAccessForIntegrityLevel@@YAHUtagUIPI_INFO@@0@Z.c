__int64 __fastcall CheckClipboardAccessForIntegrityLevel(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = 0LL;
  GetClipboardIL(a1, &v4);
  return (unsigned __int8)CheckAccess(&v4, &v3);
}
