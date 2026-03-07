__int64 __fastcall DxgkEngBltViaGDIApiExt(
        const struct _D3DKMT_PRESENT *a1,
        HDC a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        void (*a12)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int),
        int (*a13)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *))
{
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // esi
  int v16; // ebp
  int v17; // r14d

  v13 = 0;
  v14 = (int)a4;
  v15 = (int)a3;
  v16 = (int)a2;
  v17 = (int)a1;
  if ( qword_1C02D5680 && (int)qword_1C02D5680() >= 0 )
    return (unsigned int)DxgkEngBltViaGDI(
                           v17,
                           v16,
                           v15,
                           v14,
                           (__int64)a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           (__int64)a12,
                           (__int64)a13);
  return v13;
}
