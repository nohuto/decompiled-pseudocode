char __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::CloseChannelObject(__int64 a1, int a2, __int64 a3)
{
  char v3; // bl

  v3 = 0;
  if ( a2 == 18 )
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    v3 = 1;
    *(_BYTE *)(a3 + 12) = 1;
    DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)a3);
  }
  return v3;
}
