__int64 __fastcall ExpNodeCreateSystemThread(
        USHORT *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8,
        __int64 a9)
{
  USHORT v9; // cx
  int v14; // [rsp+50h] [rbp-68h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-60h] BYREF

  v9 = *a1;
  Affinity = 0LL;
  KeQueryNodeActiveAffinity(v9, &Affinity, 0LL);
  v14 = (unsigned __int16)KeSelectIdealProcessor((__int64)&Affinity, a8, 0LL, 0);
  return PsCreateSystemThreadEx(a9, a2, a3, a4, a5, a6, a7, &Affinity, &v14);
}
