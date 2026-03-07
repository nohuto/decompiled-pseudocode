__int64 __fastcall DXGVAILOBJECT::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  if ( a1 )
    DXGVAILOBJECT::DXGVAILOBJECT(a1);
  *a3 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  return 0LL;
}
