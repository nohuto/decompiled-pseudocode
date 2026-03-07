__int64 __fastcall NtGdiPatBlt(HDC a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  DC *v15; // rcx
  struct SURFACE *v16; // rsi
  __int64 v17; // rdx
  unsigned int locked; // eax
  struct _DC_ATTR *UserAttr; // rax
  __int64 v20; // rdi
  DC *v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  int v26; // [rsp+94h] [rbp-6Ch]
  __int128 v27; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  _QWORD v30[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  _DWORD v35[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]

  v22 = 0LL;
  v23 = 0LL;
  v10 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v22, a1);
  if ( v22 )
  {
    v11 = (BYTE2(a6) << 8) | BYTE2(a6);
    if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v25, (struct XDCOBJ *)&v22, 0x204u);
      v10 = 1;
      v12 = *(_DWORD *)(v25 + 32);
      if ( (v12 & 1) == 0 )
      {
        v10 = GreMaskBlt(a1, a2, a3, a4, a5, 0LL, 0, 0, 0LL, 0, 0, v11 << 16, 0);
        goto LABEL_21;
      }
      v35[1] = a3;
      v13 = a4 + a2;
      v14 = a2;
      v35[0] = a2;
      v36 = a4 + a2;
      v37 = a5 + a3;
      if ( (v12 & 0x43) != 0x43 )
      {
        bCvtPts1(v25, v35, 2LL);
        v13 = v36;
        v14 = v35[0];
      }
      if ( v26 )
      {
        v35[0] = v14 + 1;
        v36 = v13 + 1;
      }
      ERECTL::vOrder((ERECTL *)v35);
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v35) )
      {
        if ( (*((_DWORD *)v22 + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)&v22, (struct ERECTL *)v35);
        if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
          bSpDwmValidateSurface((struct XDCOBJ *)&v22, a2, a3, a4, a5);
        v30[1] = 0LL;
        v27 = 0LL;
        v31 = 256;
        v28 = 0LL;
        v29 = 0;
        v30[0] = 0LL;
        v34 = 0LL;
        v33 = 0LL;
        v32 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v27, (struct XDCOBJ *)&v22, 0) )
        {
          v15 = v22;
          v16 = (struct SURFACE *)*((_QWORD *)v22 + 62);
          if ( !v16 )
            goto LABEL_19;
          v17 = *((_QWORD *)v22 + 122);
          if ( (*(_DWORD *)(v17 + 152) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v22, *(_QWORD *)(v17 + 160));
            v15 = v22;
          }
          locked = GrePatBltLockedDC(
                     (struct XDCOBJ *)&v22,
                     (struct EXFORMOBJ *)*(unsigned int *)(*((_QWORD *)v15 + 122) + 188LL),
                     (struct ERECTL *)v35,
                     v11,
                     v16,
                     *(_DWORD *)(*((_QWORD *)v15 + 122) + 184LL),
                     *(_DWORD *)(*((_QWORD *)v15 + 122) + 176LL),
                     *(_DWORD *)(*((_QWORD *)v15 + 122) + 188LL),
                     *(_DWORD *)(*((_QWORD *)v15 + 122) + 180LL));
        }
        else
        {
          locked = XDCOBJ::bFullScreen((XDCOBJ *)&v22);
        }
        v10 = locked;
LABEL_19:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v27);
        if ( v30[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v30);
      }
    }
  }
LABEL_21:
  if ( v22 )
  {
    if ( (_DWORD)v23 && (*((_DWORD *)v22 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v23) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v22);
        if ( UserAttr )
          DC::RestoreAttributes(v22, UserAttr);
      }
      *((_DWORD *)v22 + 11) &= ~2u;
      LODWORD(v23) = 0;
    }
    v24 = 0;
    v20 = *(_QWORD *)v22;
    HmgDecrementExclusiveReferenceCountEx(v22, HIDWORD(v23), &v24);
    if ( v24 )
      GrepDeleteDC(v20, 0x2000000LL);
  }
  return v10;
}
