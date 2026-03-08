/*
 * XREFs of ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1C02BA388
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02BEED0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

struct _FD_GLYPHSET *__fastcall ProbeAndReadFD_GLYPHSET(WCRUN *Src, int a2, unsigned int a3, __int64 a4)
{
  __int64 phg_high; // rcx
  __int64 v7; // r13
  size_t v8; // r12
  ULONG phg; // ecx
  unsigned int v10; // r14d
  unsigned int *v11; // rdi
  char v12; // r15
  unsigned int v13; // r12d
  ULONG v14; // eax
  unsigned int *v15; // r10
  unsigned int v16; // r8d
  unsigned int i; // r14d
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rax
  _BYTE *v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // [rsp+28h] [rbp-60h]
  unsigned int v24; // [rsp+28h] [rbp-60h]
  int v25; // [rsp+2Ch] [rbp-5Ch]
  ULONG v26; // [rsp+30h] [rbp-58h]
  unsigned int *v27; // [rsp+40h] [rbp-48h]

  if ( a3 < 0x10 )
    return 0LL;
  if ( !a2 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[1] > MmUserProbeAddress || &Src[1] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  phg_high = HIDWORD(Src->phg);
  v23 = phg_high;
  if ( (unsigned int)phg_high > (a3 - 16) >> 4 )
    return 0LL;
  v7 = 4 * phg_high;
  v8 = 16 * phg_high + 16;
  phg = (ULONG)Src->phg;
  v26 = phg;
  if ( phg > (a3 - (unsigned int)v8) >> 2 )
    return 0LL;
  v10 = v8 + 4 * phg;
  if ( v10 > 0x2710000 )
    return 0LL;
  v11 = v10 ? (unsigned int *)Win32AllocPoolZInit(v10, 1886221639LL) : 0LL;
  if ( !v11 )
    return 0LL;
  v12 = 0;
  v25 = 0;
  memmove(v11, Src, v8);
  *v11 = v10;
  v13 = v23;
  if ( v11[3] == v23 )
  {
    v14 = v26;
    if ( v11[2] == v26 )
    {
      v15 = &v11[v7 + 4];
      v27 = v15;
      v16 = 0;
      for ( i = 0; i < v13; ++i )
      {
        v18 = HIWORD(v11[4 * i + 4]);
        if ( v14 - v25 < v18 )
          goto LABEL_38;
        v19 = LOWORD(v11[4 * i + 4]);
        if ( v19 < v16 )
          goto LABEL_38;
        v16 = v19 + v18;
        v24 = v19 + v18;
        v25 += v18;
        v20 = *(_QWORD *)&v11[4 * i + 6];
        if ( v20 )
        {
          v21 = (_BYTE *)(v20 + a4);
          v22 = 4 * v18;
          if ( v20 + a4 < (unsigned __int64)Src
            || v21 - (_BYTE *)Src > (unsigned __int64)a3
            || (unsigned int)v22 > (unsigned __int64)Src + a3 - (_QWORD)v21 )
          {
            goto LABEL_38;
          }
          if ( !a2 && (_DWORD)v22 )
          {
            if ( ((unsigned __int8)v21 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v21[v22] > MmUserProbeAddress || &v21[v22] < v21 )
              *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(v15, v21, (unsigned int)v22);
          *(_QWORD *)&v11[4 * i + 6] = v27;
          v15 = &v27[HIWORD(v11[4 * i + 4])];
          v27 = v15;
          v16 = v24;
        }
        v14 = v26;
      }
      v12 = 1;
    }
  }
LABEL_38:
  if ( !v12 )
  {
    Win32FreePool(v11);
    return 0LL;
  }
  return (struct _FD_GLYPHSET *)v11;
}
