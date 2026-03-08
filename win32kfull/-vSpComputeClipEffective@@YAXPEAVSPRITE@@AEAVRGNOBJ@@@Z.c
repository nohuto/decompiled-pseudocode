/*
 * XREFs of ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0282F08
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C02857B8 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C012F6D8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z @ 0x1C02829B8 (-vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C0283440 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0285584 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComputeClipEffective(struct SPRITE *a1, struct RGNOBJ *a2)
{
  struct _SURFOBJ **v4; // r13
  struct _SURFOBJ *v5; // rdx
  char v6; // si
  _BYTE *v7; // rax
  char v8; // cl
  char *v9; // rdx
  LONG v10; // r15d
  struct _SURFOBJ *v11; // rax
  LONG cx; // r10d
  LONG cy; // r11d
  int v14; // r9d
  LONG v15; // r8d
  LONG v16; // r12d
  char *pvScan0; // rdx
  char *i; // rax
  LONG v19; // r11d
  int v20; // [rsp+28h] [rbp-110h]
  __int64 v21; // [rsp+58h] [rbp-E0h] BYREF
  int v22; // [rsp+60h] [rbp-D8h]
  __int64 v23; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-C8h] BYREF
  LONG v25; // [rsp+78h] [rbp-C0h]
  LONG v26; // [rsp+7Ch] [rbp-BCh]
  LONG v27; // [rsp+80h] [rbp-B8h]
  LONG lDelta; // [rsp+84h] [rbp-B4h]
  LONG v29; // [rsp+88h] [rbp-B0h]
  LONG v30; // [rsp+8Ch] [rbp-ACh]
  LONG v31; // [rsp+90h] [rbp-A8h]
  LONG v32; // [rsp+94h] [rbp-A4h]
  LONG v33; // [rsp+98h] [rbp-A0h]
  LONG v34; // [rsp+9Ch] [rbp-9Ch]
  int v35; // [rsp+A0h] [rbp-98h]
  LONG v36; // [rsp+A4h] [rbp-94h]
  char *v37; // [rsp+A8h] [rbp-90h]
  char *v38; // [rsp+B0h] [rbp-88h]
  struct _RECTL *v39; // [rsp+B8h] [rbp-80h]
  char *v40; // [rsp+C0h] [rbp-78h]
  unsigned __int8 *v41; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v42[4]; // [rsp+D0h] [rbp-68h] BYREF
  struct _RECTL v43; // [rsp+F0h] [rbp-48h] BYREF

  v42[0] = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( *((_DWORD *)a1 + 1) == 2 && (*(_DWORD *)a1 & 8) == 0 )
    {
      v4 = (struct _SURFOBJ **)((char *)a1 + 128);
      v42[2] = (char *)a1 + 128;
      v5 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( v5 )
      {
        if ( v5->iBitmapFormat == 6 && !v5->iType && SURFREFVIEW::bMap((SURFREFVIEW *)v42, v5) )
        {
          if ( *((_DWORD *)a1 + 56) != 3 || (v6 = 1, *((_BYTE *)a1 + 231)) )
            v6 = 0;
          v7 = (char *)a1 + 202;
          if ( (*((_BYTE *)a1 + 203) & 1) == 0 || (v8 = 1, *v7 != 0xFF) )
            v8 = 0;
          if ( v6 || v8 )
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v24);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v23);
            if ( v24 && v21 && v23 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v23);
              RGNOBJ::vSet((RGNOBJ *)&v21);
              RGNOBJ::vSet((RGNOBJ *)&v24);
              v41 = 0LL;
              if ( v6 )
              {
                v39 = (struct _RECTL *)((char *)a1 + 96);
                v43 = (struct _RECTL)*((_OWORD *)a1 + 6);
                vSpUpdatePerPixelAlphaFromColorKey(*v4, *((_DWORD *)a1 + 51), &v43, &v41);
                v9 = (char *)a1 + 96;
              }
              else
              {
                v9 = (char *)a1 + 96;
                v39 = (struct _RECTL *)((char *)a1 + 96);
              }
              v42[3] = v9;
              v10 = 0;
              v11 = *v4;
              cx = (*v4)->sizlBitmap.cx;
              v26 = cx;
              v31 = cx;
              cy = v11->sizlBitmap.cy;
              v29 = cy;
              v32 = cy;
              v14 = -1;
              v22 = -1;
              v15 = -1;
              lDelta = v11->lDelta;
              v30 = lDelta;
              v16 = 0;
              v27 = 0;
              pvScan0 = (char *)v11->pvScan0;
              while ( 1 )
              {
                v40 = pvScan0;
                v38 = pvScan0;
                v34 = v16;
                if ( v16 >= cy )
                  break;
                v10 = 0;
                v25 = 0;
                for ( i = pvScan0; ; i += 4 )
                {
                  v37 = i;
                  v35 = v14;
                  v19 = v10;
                  v33 = v10;
                  v36 = v15;
                  if ( v10 >= cx )
                    break;
                  if ( i[3] )
                  {
                    v14 = v34;
                    if ( v15 != -1 )
                    {
                      v14 = v35;
                      v19 = v36;
                    }
                    v15 = v19;
                    v22 = v14;
                  }
                  else if ( v15 != -1 )
                  {
                    vSpAddOpaqueRects(
                      v10,
                      v16,
                      v15,
                      v14,
                      cx,
                      v20,
                      (struct RGNMEMOBJTMP *)&v21,
                      (struct RGNMEMOBJTMP *)&v24,
                      (struct RGNOBJ *)&v23);
                    v15 = -1;
                    v14 = -1;
                    v22 = -1;
                    i = v37;
                  }
                  v25 = ++v10;
                  cx = v26;
                }
                v27 = ++v16;
                pvScan0 = &v38[lDelta];
                cy = v29;
              }
              if ( v15 != -1 )
                vSpAddOpaqueRects(
                  v10,
                  v16,
                  v15,
                  v14,
                  cx,
                  v20,
                  (struct RGNMEMOBJTMP *)&v21,
                  (struct RGNMEMOBJTMP *)&v24,
                  (struct RGNOBJ *)&v23);
              if ( v6 )
              {
                v43 = *v39;
                vSpDeletePerPixelAlphaFromColorKey(*v4, *((_DWORD *)a1 + 51), &v43, v41);
              }
              if ( RGNOBJ::bMerge((RGNOBJ *)&v21, (struct RGNOBJ *)&v23, a2, 8u) )
                RGNOBJ::vSwap((RGNOBJ *)&v21, a2);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v23);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v24);
          }
          else if ( !*v7 )
          {
            RGNOBJ::vSet(a2);
          }
        }
      }
    }
  }
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v42);
}
