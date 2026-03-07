__int64 __fastcall CompositionSurfaceObject::Create(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        ACCESS_MASK a3,
        __int64 a4,
        void **a5)
{
  return DxgkCompositionObject::Create(
           a1,
           (__int64)a2,
           a3,
           a4,
           1,
           160,
           (__int64 (__fastcall *)(PVOID, __int64, char *))CompositionSurfaceObject::ObjectInit,
           0LL,
           a5);
}
