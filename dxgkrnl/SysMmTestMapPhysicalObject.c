__int64 __fastcall SysMmTestMapPhysicalObject(
        struct SYSMM_PHYSICAL_OBJECT *a1,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        void **a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  return SysMmMapPhysicalObject(a1, a2, a3, a4, 1, a5, a6, a7);
}
