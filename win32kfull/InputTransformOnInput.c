__int64 __fastcall InputTransformOnInput(__int64 a1, struct tagWND *a2)
{
  struct _EX_PUSH_LOCK **v2; // rcx

  v2 = *(struct _EX_PUSH_LOCK ***)(a1 + 80);
  if ( v2 )
    return InputTransform::OnInput(v2, a2);
  else
    return 0LL;
}
