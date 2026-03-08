/*
 * XREFs of ?vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z @ 0x1C02A5BCC
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x1C00C7250 (vMirrorIncludeNotifyWrap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02A55DC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vMirrorNotifyDrawing(struct PDEVOBJ *a1, struct SURFACE *a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  struct _DISPSURF *i; // rbx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v11)(struct _SURFOBJ *, __int64, __int64); // r10
  void (__fastcall *v12)(__int64, __int64, __int64, char **); // r10
  __int64 v13; // rcx
  char *v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+38h] [rbp-10h]
  int v16; // [rsp+3Ch] [rbp-Ch]

  v3 = *(_QWORD *)a1;
  v5 = a3;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v3 + 40) & 0x1000000) != 0 )
  {
    for ( i = **(struct _DISPSURF ***)(v3 + 1768); i; i = *(struct _DISPSURF **)i )
    {
      v7 = *((_QWORD *)i + 6);
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 1792) & 0x8000000) != 0 )
        {
          v8 = *(_DWORD *)(v7 + 2096);
          if ( (v8 & 0x1000) != 0 )
          {
            v9 = *(_QWORD *)(v7 + 1760);
            if ( (v8 & 0x8000) != 0 )
            {
              if ( *(_QWORD *)(v9 + 760) )
              {
                DevBitmap = GetDevBitmap(
                              i,
                              (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
                v11(DevBitmap, 7LL, v5);
              }
            }
            else
            {
              v12 = *(void (__fastcall **)(__int64, __int64, __int64, char **))(v9 + 808);
              if ( v12 )
              {
                if ( a2 )
                  v14 = (char *)a2 + 24;
                else
                  v14 = 0LL;
                v13 = *(_QWORD *)(v7 + 1768);
                v15 = v5;
                v16 = 0;
                v12(v13, 1LL, 16LL, &v14);
              }
            }
          }
        }
      }
    }
  }
}
