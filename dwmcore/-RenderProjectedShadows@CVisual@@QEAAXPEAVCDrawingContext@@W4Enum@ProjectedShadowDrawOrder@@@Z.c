CProjectedShadowScene **__fastcall CVisual::RenderProjectedShadows(__int64 a1, struct CDrawingContext *a2, int a3)
{
  CProjectedShadowScene **result; // rax
  CProjectedShadowScene *v6; // rbp
  struct CProjectedShadowReceiver **i; // rdi
  struct CProjectedShadowReceiver *v8; // rsi
  CProjectedShadowScene **j; // rbx

  result = *(CProjectedShadowScene ***)(a1 + 232);
  if ( (*(_DWORD *)result & 0x20000) != 0 )
  {
    result = (CProjectedShadowScene **)CVisual::GetProjectedShadowReceivers(a1);
    v6 = result[1];
    for ( i = (struct CProjectedShadowReceiver **)*result; i != (struct CProjectedShadowReceiver **)v6; ++i )
    {
      v8 = *i;
      if ( *((_DWORD *)*i + 24) == a3 )
      {
        for ( j = (CProjectedShadowScene **)*((_QWORD *)v8 + 10); ; CProjectedShadowScene::DrawShadows(*j, a2, v8) )
        {
          result = j;
          if ( j == *((CProjectedShadowScene ***)v8 + 9) )
            break;
          --j;
        }
      }
    }
  }
  return result;
}
