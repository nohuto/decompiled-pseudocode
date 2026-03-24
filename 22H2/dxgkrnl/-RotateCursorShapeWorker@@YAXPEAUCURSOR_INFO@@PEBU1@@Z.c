/*
 * XREFs of ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x1C027E16C
 * Callers:
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C027DEF0 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 * Callees:
 *     ?GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z @ 0x1C027DE44 (-GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z.c)
 */

void __fastcall RotateCursorShapeWorker(struct CURSOR_INFO *a1, const struct CURSOR_INFO *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // r15d
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  unsigned __int64 v8; // r13
  __int64 v9; // r10
  bool v10; // zf
  __int64 v11; // rbx
  char v12; // bl
  _BYTE *v13; // r8
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v14; // [rsp+20h] [rbp-58h]
  unsigned int v15; // [rsp+28h] [rbp-50h]
  unsigned int v16; // [rsp+30h] [rbp-48h]
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h]

  v18 = 0;
  v2 = 0;
  v17 = 0;
  v4 = *((_DWORD *)a1 + 2);
  v6 = *(_DWORD *)a1;
  if ( v4 )
  {
    do
    {
      v7 = 0;
      if ( v6 )
      {
        v8 = 0LL;
        do
        {
          v9 = *((_DWORD *)a2 + 4) * v2;
          v10 = *((_DWORD *)a1 + 9) == 0;
          v11 = *((_QWORD *)a2 + 3);
          v16 = *((_DWORD *)a2 + 2);
          v15 = *(_DWORD *)a2;
          v14 = *((_DWORD *)a1 + 8);
          v19 = v9;
          if ( v10 )
          {
            GetRotatedPoint(v7, v2, &v18, &v17, v14, v15, v16);
            *(_DWORD *)(4 * v18 + (unsigned __int64)(*((_DWORD *)a1 + 5) * v17) + *((_QWORD *)a1 + 3)) = *(_DWORD *)(v19 + 4 * v7 + v11);
          }
          else
          {
            v12 = (*(_BYTE *)(v9 + (v8 >> 3) + v11) >> (7 - (v7 & 7))) & 1;
            GetRotatedPoint(v7, v2, &v18, &v17, v14, v15, v16);
            v13 = (_BYTE *)(*((_QWORD *)a1 + 3) + ((unsigned __int64)v18 >> 3) + *((_DWORD *)a1 + 5) * v17);
            *v13 = (v12 << (7 - (v18 & 7))) | *v13 & ~(1 << (7 - (v18 & 7)));
          }
          ++v7;
          ++v8;
        }
        while ( v7 < v6 );
      }
      ++v2;
    }
    while ( v2 < v4 );
  }
}
