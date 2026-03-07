__int64 __fastcall DCompositionThreadCallout(struct _ETHREAD *a1, int a2)
{
  if ( a2 == 1 && a1 == DirectComposition::CConnection::s_pDwmRenderThread )
    DirectComposition::CConnection::OnDwmRenderThreadExit();
  return 0LL;
}
