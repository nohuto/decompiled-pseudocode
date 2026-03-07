void __fastcall vSpRedrawSprite(struct SPRITE *a1)
{
  __int64 v1; // r12
  char v3; // dl
  struct _RECTL *v4; // rcx
  unsigned int v5; // r13d
  struct _RECTL *v6; // r14
  struct _SURFOBJ *Composite; // r15
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  struct SPRITE *i; // rcx
  const struct _RECTL *v14; // rax
  struct _RECTL *v15; // rbx
  int v16; // edi
  struct REGION *v17; // rbx
  struct _RECTL v18; // xmm0
  struct _RECTL *v19; // r9
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  ULONG StartingIndex; // [rsp+48h] [rbp-C0h] BYREF
  struct _POINTL v24; // [rsp+50h] [rbp-B8h] BYREF
  struct _RECTL v25; // [rsp+58h] [rbp-B0h] BYREF
  struct _RECTL v26; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v27[20]; // [rsp+78h] [rbp-90h] BYREF
  char v28; // [rsp+8Ch] [rbp-7Ch]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+108h] [rbp+0h]
  unsigned int v34; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v35[20]; // [rsp+11Ch] [rbp+14h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v26 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x400) == 0 && (*(_DWORD *)a1 & 0x420) == 0x20 )
  {
    v5 = 0;
    if ( !(unsigned int)bIgnoreMirrorUpdate(a1) && ((v3 & 0x40) == 0 || (v3 & 0xC0) == 0xC0) )
    {
      v6 = v4 + 5;
      StartingIndex = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v1, v4 + 5, &StartingIndex);
      if ( Composite )
      {
        v8 = 0LL;
        v9 = *((_QWORD *)a1 + 20);
        v24.x = -v6->left;
        v24.y = -*((_DWORD *)a1 + 21);
        if ( v9 )
        {
          v10 = *(_DWORD *)(v9 + 88);
          if ( (v10 & 0x80004000) != 0 && (v10 & 0x200) == 0 )
          {
            v8 = v9 - 24;
            GreLockDisplayDevice(*(_QWORD *)(v9 - 24 + 48));
          }
        }
        hsurf = (int)Composite[1].hsurf;
        p_pvScan0 = 0LL;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &Composite[-1].pvScan0;
          GreLockDisplayDevice(Composite->hdev);
        }
        INVOKEOFFCOPYBITS(
          &v24,
          Composite,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0LL,
          0LL,
          v6,
          (struct _POINTL *)v6);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        if ( v8 )
          GreUnlockDisplayDevice(*(_QWORD *)(v8 + 48));
        for ( i = *(struct SPRITE **)(v1 + 8); ; i = *(struct SPRITE **)&v15[1].right )
        {
          v14 = (const struct _RECTL *)pSpFindInZ(i, v6);
          v15 = (struct _RECTL *)v14;
          if ( !v14 )
            break;
          if ( bIntersect(v14 + 5, v6, &v26) )
            vSpComposite((struct SPRITE *)v15, &v24, Composite, &v26);
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)&v15[15].right);
        }
        v16 = 1;
        v17 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
        if ( !v17 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
            vSpWriteToScreen((struct _SPRITESTATE *)v1, &v24, Composite, v6);
          goto LABEL_48;
        }
        v30 = 0LL;
        v31 = 0;
        v32 = 1;
        v33 = 0LL;
        v29 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v27, v17, (struct ERECTL *)v6, 1);
        memset_0(&v34, 0, 0x144uLL);
        if ( v28 )
        {
          if ( v28 != 1 )
          {
            if ( v28 != 3 )
            {
LABEL_45:
              vSpAddAndCompactDirtyRegion(a1, v17);
LABEL_48:
              if ( StartingIndex == -1 )
              {
                vSpDeleteSurface(Composite);
              }
              else
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v25, (struct _EX_PUSH_LOCK *)(v1 + 688));
                RtlClearBits((PRTL_BITMAP)(v1 + 664), StartingIndex, 1u);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v25);
              }
              return;
            }
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)v27, 0, 0, 4u, 0x14u);
LABEL_32:
            if ( !v16 )
              goto LABEL_34;
            do
            {
              v16 = XCLIPOBJ::bEnum((XCLIPOBJ *)v27, 0x144u, (char *)&v34, 0LL);
LABEL_34:
              if ( v34 )
              {
                do
                {
                  v19 = (struct _RECTL *)&v35[v5];
                  if ( v19->left < v6->left )
                    v19->left = v6->left;
                  v20 = *((_DWORD *)a1 + 22);
                  if ( v19->right > v20 )
                    v19->right = v20;
                  v21 = *((_DWORD *)a1 + 21);
                  if ( v19->top < v21 )
                    v19->top = v21;
                  v22 = *((_DWORD *)a1 + 23);
                  if ( v19->bottom > v22 )
                    v19->bottom = v22;
                  vSpWriteToScreen((struct _SPRITESTATE *)v1, &v24, Composite, v19);
                  ++v5;
                }
                while ( v5 < v34 );
              }
              v5 = 0;
            }
            while ( v16 );
            goto LABEL_45;
          }
          v18 = *(struct _RECTL *)&v27[4];
        }
        else
        {
          v18 = *v6;
        }
        v35[0] = v18;
        v34 = 1;
        v16 = 0;
        goto LABEL_32;
      }
    }
  }
}
