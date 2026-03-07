void __fastcall DXGGLOBAL::CheckDebugBreak(DXGGLOBAL *this)
{
  if ( g_OSTestSigningEnabled && (unsigned __int8)WdIsDebuggerPresent(0LL) && *((_QWORD *)this + 218) )
  {
    if ( !**((_BYTE **)this + 218) )
    {
      if ( !*(_BYTE *)(*((_QWORD *)this + 218) + 1LL) )
        return;
      *(_BYTE *)(*((_QWORD *)this + 218) + 1LL) = 0;
    }
    __debugbreak();
  }
}
