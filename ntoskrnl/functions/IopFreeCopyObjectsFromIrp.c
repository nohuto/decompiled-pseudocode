unsigned __int8 __fastcall IopFreeCopyObjectsFromIrp(__int64 a1)
{
  unsigned __int8 result; // al
  __int64 v3; // rcx
  struct _MDL *v4; // rcx

  result = IopIrpHasExtensionType(a1, 9u);
  if ( result && *(_QWORD *)(v3 + 112) )
  {
    v4 = *(struct _MDL **)(v3 + 8);
    if ( v4 )
    {
      IopUnlockAndFreeMdl(v4);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    return IopFreeCopyObjectsFromDataBuffer(*(_QWORD *)(a1 + 112), 0LL);
  }
  return result;
}
