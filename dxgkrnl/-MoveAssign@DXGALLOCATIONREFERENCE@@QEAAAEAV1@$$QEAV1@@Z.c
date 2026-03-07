struct _EX_RUNDOWN_REF **__fastcall DXGALLOCATIONREFERENCE::MoveAssign(
        struct _EX_RUNDOWN_REF **a1,
        struct _EX_RUNDOWN_REF **a2)
{
  struct _EX_RUNDOWN_REF *v4; // rcx
  struct _EX_RUNDOWN_REF **result; // rax

  v4 = *a1;
  if ( v4 )
    ExReleaseRundownProtection(v4 + 11);
  *a1 = *a2;
  result = a1;
  *a2 = 0LL;
  return result;
}
