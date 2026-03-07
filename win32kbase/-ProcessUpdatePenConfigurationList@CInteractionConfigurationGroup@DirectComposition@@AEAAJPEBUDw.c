__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdatePenConfigurationList(
        __int64 a1,
        _DWORD *a2,
        int a3,
        _BYTE *a4)
{
  unsigned int v6; // ecx
  int v8; // r8d
  __int64 result; // rax
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  *a4 = 0;
  v6 = a2[2];
  v8 = a2[3];
  if ( a2[1] > v6 )
    return 3221225485LL;
  v10[0] = a2[1];
  v10[1] = v6;
  v10[2] = v8;
  result = DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
             v6,
             a3,
             (unsigned int)v10,
             (int)a1 + 64,
             (__int64)a4);
  if ( (int)result >= 0 )
  {
    if ( *a4 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 12) |= 2u;
    }
  }
  return result;
}
