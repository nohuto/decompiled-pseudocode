void __fastcall SetMiPWindowFlags(struct tagWND *a1, __int64 a2)
{
  if ( a1 )
    InternalSetProp((__int64)a1, gatomMiPFlags, a2, 5u);
}
