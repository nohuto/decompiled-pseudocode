unsigned __int64 __fastcall Edgy::_PostEdgyInertia(int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rcx

  result = HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    v6 = *(_QWORD *)(result + 40);
    if ( *(char *)(v6 + 20) >= 0 && *(char *)(v6 + 19) >= 0 )
      return PostMessage(result, 0x23Du, 0LL, (__int128 *)(a3 | ((unsigned __int64)a2 << 16)));
  }
  return result;
}
