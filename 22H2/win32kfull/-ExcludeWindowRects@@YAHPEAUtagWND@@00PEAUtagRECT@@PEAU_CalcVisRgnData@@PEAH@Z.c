/*
 * XREFs of ?ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z @ 0x1C00D68A0
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0073B10 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C01524B0 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01E4F80 (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall ExcludeWindowRects(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagRECT *a4,
        struct _CalcVisRgnData *a5,
        int *a6)
{
  int v6; // ebp
  struct tagWND *i; // rbx
  __int64 v11; // rdx
  LONG *v12; // rdi
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdx

  v6 = 0;
  for ( i = a2; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( i == a3 )
      break;
    v11 = *((_QWORD *)i + 5);
    v12 = (LONG *)(v11 + 88);
    if ( !v6 )
    {
      v14 = *((_QWORD *)a1 + 5);
      if ( *(_QWORD *)(v14 + 256) == *(_QWORD *)(v11 + 256) )
      {
        v15 = *(_DWORD *)(v14 + 288);
        v16 = *(_DWORD *)(v11 + 288);
        if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)(v15 >> 8)) & 0x1FF) != 0
          || ((v15 & 0xF) == 2 && (v15 & 0x20000000) != 0 ? (v17 = 1) : (v17 = 0),
              (v16 & 0xF) == 2 && (v16 & 0x20000000) != 0 ? (v18 = 1) : (v18 = 0),
              v17 != v18) )
        {
LABEL_19:
          v6 = 1;
        }
      }
      else if ( (*(_DWORD *)(v14 + 288) & 0xF) != 2 || (*(_DWORD *)(v11 + 288) & 0xF) != 2 )
      {
        goto LABEL_19;
      }
    }
    if ( (*(_BYTE *)(v11 + 31) & 0x10) == 0 || (*(_BYTE *)(v11 + 26) & 8) != 0 || (*(_BYTE *)(v11 + 24) & 0x20) != 0 )
      continue;
    if ( v6 )
    {
      if ( !(unsigned int)DpiRectIntersectsRectWithSubpixel(v12, (char *)i + 224, i, a4, (char *)a1 + 224, a1) )
        continue;
    }
    else if ( a4->left >= *(_DWORD *)(v11 + 96)
           || *v12 >= a4->right
           || a4->top >= *(_DWORD *)(v11 + 100)
           || *(_DWORD *)(v11 + 92) >= a4->bottom )
    {
      continue;
    }
    if ( *v12 < v12[2] && v12[1] < v12[3] )
    {
      if ( *((_DWORD *)a5 + 1) == *((_DWORD *)a5 + 2) )
      {
        result = ResizeVisExcludeMemory(a5);
        if ( !(_DWORD)result )
          return result;
      }
      v19 = *((int *)a5 + 1);
      *(_QWORD *)(*((_QWORD *)a5 + 2) + 8 * v19) = i;
      *((_DWORD *)a5 + 1) = v19 + 1;
    }
  }
  if ( a6 )
  {
    if ( v6 )
      *a6 = 1;
  }
  return 1LL;
}
