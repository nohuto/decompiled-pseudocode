/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180027268
 * Callers:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18002718C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800271F4 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS@@@Z @ 0x18021FBEC (-ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIO.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180027640 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(unsigned __int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  unsigned __int64 v6; // rsi
  unsigned int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // r14d
  int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // ebx
  HANDLE ProcessHeap; // rax
  char *v17; // rbp
  int v18; // eax
  char *v20; // rax
  unsigned int v21; // ecx
  unsigned __int64 v22; // rdx
  unsigned int v23; // [rsp+20h] [rbp-18h]

  v5 = *(_DWORD *)(a1 + 24);
  v6 = a1;
  v8 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    v23 = 216;
    goto LABEL_36;
  }
  v9 = *(_DWORD *)(a1 + 20);
  v10 = 0;
  if ( v8 > v9 )
  {
    a1 = a2 * (unsigned __int64)v8;
    if ( a1 > 0xFFFFFFFF )
    {
      v23 = 225;
    }
    else
    {
      v11 = v8;
      if ( !a4 )
      {
        v12 = v8 - v9;
        v13 = 16;
        if ( v9 <= 0x10 || (v14 = 8092, v13 = v9, v9 < 0x1F9C) )
          v14 = v13;
        if ( v12 <= v14 )
          v12 = v14;
        v11 = v9 + v12;
        if ( v11 < v9 || a2 * (unsigned __int64)v11 > 0xFFFFFFFF )
          v11 = v8;
        else
          LODWORD(a1) = a2 * v11;
      }
      if ( v11 <= 0xFFFFFFFF / a2 )
      {
        v15 = a1;
        if ( *(_QWORD *)v6 == *(_QWORD *)(v6 + 8) )
        {
          if ( (_DWORD)a1 )
          {
            ProcessHeap = GetProcessHeap();
            v17 = (char *)HeapAlloc(ProcessHeap, 0, v15);
            if ( v17 )
            {
              v18 = *(_DWORD *)(v6 + 24);
              v10 = 0;
              if ( v18 )
                memcpy_0(v17, *(const void **)v6, a2 * v18);
LABEL_19:
              memset_0(&v17[a2 * *(_DWORD *)(v6 + 20)], 0, a2 * (v11 - *(_DWORD *)(v6 + 20)));
              *(_DWORD *)(v6 + 20) = v11;
              *(_QWORD *)v6 = v17;
              return v10;
            }
            v10 = -2147024882;
          }
          else
          {
            v10 = -2147024809;
          }
          MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v10, 0x102u, 0LL);
          return v10;
        }
        v20 = (char *)DefaultHeap::Realloc(*(void **)v6, (unsigned int)a1);
        v17 = v20;
        if ( !v20 )
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0x114u, 0LL);
          return v10;
        }
        v10 = 0;
        if ( v20 != *(char **)v6 )
        {
          if ( a5 )
          {
            v22 = *a5;
            if ( *a5 >= *(_QWORD *)v6 && v22 < *(_QWORD *)v6 + (unsigned __int64)(*(_DWORD *)(v6 + 20) * a2) )
              *a5 = (unsigned __int64)&v20[v22 - *(_QWORD *)v6];
          }
        }
        goto LABEL_19;
      }
      v23 = 251;
    }
LABEL_36:
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, v23, 0LL);
  }
  return v10;
}
