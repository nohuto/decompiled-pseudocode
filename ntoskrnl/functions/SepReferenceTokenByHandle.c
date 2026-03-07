NTSTATUS __fastcall SepReferenceTokenByHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID *Object,
        _BYTE *a6,
        _QWORD *a7)
{
  *a6 = 0;
  *a7 = 0LL;
  if ( (unsigned __int64)a1 + 6 > 2 )
    return ObReferenceObjectByHandleWithTag(a1, a2, (POBJECT_TYPE)SeTokenObjectType, a3, 0x74726853u, Object, 0LL);
  if ( (a2 & 0xFFFFFFE7) != 0 )
    return -1073741790;
  return SepReferenceTokenUsingPseudoHandle((_DWORD)a1, a2, (_DWORD)Object, (_DWORD)a6, (__int64)a7);
}
