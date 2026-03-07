__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::CleanupChannelObject(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 == 18 )
  {
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_BYTE *)(a3 + 13) = 1;
    return DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)a3);
  }
  return result;
}
