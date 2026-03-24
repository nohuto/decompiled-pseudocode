/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C0034520
 * Callers:
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C006F9E0 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C7464 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0034360 (GreCreateRectRgnIndirect.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00348A0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C0035470 (HmgSetOwner.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C8F50 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  LONG bottom; // esi
  LONG right; // edi
  LONG top; // ebp
  LONG left; // r14d
  __int64 v8; // rdx
  LONG v9; // r9d
  LONG v10; // r10d
  struct HOBJ__ *RectRgnIndirect; // rax
  struct HOBJ__ *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  bool v16; // zf
  int *v17; // r8
  int v18; // eax
  _DWORD *v19; // r8
  int *v20; // r8
  int v21; // eax
  char *v22; // rcx
  _DWORD *v23; // r8
  char *v24; // r8
  __int128 v25; // [rsp+20h] [rbp-58h]
  _QWORD v26[8]; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0;
  if ( *a1 )
  {
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v26, *a1, 0, 0);
    v8 = v26[0];
    if ( v26[0] )
    {
      *(_QWORD *)&v25 = __PAIR64__(top, left);
      v9 = left;
      *((_QWORD *)&v25 + 1) = __PAIR64__(bottom, right);
      v10 = top;
      if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
        && (((bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && ((right & 0xF8000000) == 0 || (right & 0xF8000000) == 0xF8000000)
        && ((top & 0xF8000000) == 0 || (top & 0xF8000000) == 0xF8000000) )
      {
        if ( left > right )
        {
          v9 = right;
          LODWORD(v25) = right;
          right = left;
          DWORD2(v25) = left;
        }
        if ( top > bottom )
        {
          v10 = bottom;
          DWORD1(v25) = bottom;
          bottom = top;
          HIDWORD(v25) = top;
        }
        if ( v9 == right || v10 == bottom )
        {
          v15 = *(_QWORD *)(v26[0] + 88LL);
          *(_QWORD *)(v26[0] + 96LL) = 0LL;
          *(_QWORD *)(v8 + 104) = 0LL;
          *(_DWORD *)(v8 + 80) = 16;
          *(_DWORD *)(v8 + 84) = 1;
          *(_DWORD *)v15 = 0;
          v2 = 1;
          *(_DWORD *)(v15 + 4) = 0x80000000;
          *(_QWORD *)(v15 + 8) = 0x7FFFFFFFLL;
          *(_QWORD *)(v8 + 40) = v15 + 16;
        }
        else
        {
          v16 = *(_DWORD *)(v26[0] + 80LL) == 56;
          v17 = *(int **)(v26[0] + 88LL);
          *(_OWORD *)(v26[0] + 96LL) = v25;
          if ( v16 )
          {
            v18 = *v17;
            v2 = 1;
            v17[2] = v10;
            v19 = (int *)((char *)v17 + (unsigned int)(4 * v18 + 16));
            v19[1] = v10;
            v19[2] = bottom;
            v19[3] = v9;
            v19[4] = right;
            v20 = (_DWORD *)((char *)v19 + (unsigned int)(4 * *v19 + 16));
            v21 = *v20;
            v20[1] = bottom;
            v22 = (char *)v20 + (unsigned int)(4 * v21 + 16);
          }
          else
          {
            *(_DWORD *)(v8 + 80) = 56;
            *(_DWORD *)(v8 + 84) = 3;
            *v17 = 0;
            v17[3] = 0;
            v17[1] = 0x80000000;
            v17[2] = v10;
            v23 = v17 + 4;
            *v23 = 2;
            v23[1] = v10;
            v23[2] = bottom;
            v23[3] = v9;
            v23[4] = right;
            v23[5] = 2;
            v24 = (char *)v23 + (unsigned int)(4 * *v23 + 16);
            v22 = v24 + 16;
            *(_DWORD *)v24 = 0;
            v2 = 1;
            *((_DWORD *)v24 + 1) = bottom;
            *((_QWORD *)v24 + 1) = 0x7FFFFFFFLL;
          }
          *(_QWORD *)(v8 + 40) = v22;
        }
      }
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v26);
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v13 = RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  LOBYTE(v14) = 4;
  HmgSetOwner(v13, 0LL, v14);
  return 1LL;
}
