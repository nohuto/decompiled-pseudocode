__int64 __fastcall GreGetClipBox(HDC a1, int *a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // rcx
  struct REGION *v7; // rax
  DC *v8; // rcx
  struct REGION *v9; // rsi
  int v10; // r8d
  int v11; // r9d
  int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  DC *v15; // rcx
  struct _DC_ATTR *UserAttr; // rax
  HDC v17; // rbx
  DC *v19; // rax
  int v20; // eax
  int v21; // ecx
  DC *v22; // [rsp+28h] [rbp-29h] BYREF
  __int64 v23; // [rsp+30h] [rbp-21h]
  __int64 v24; // [rsp+38h] [rbp-19h] BYREF
  int v25; // [rsp+40h] [rbp-11h]
  int v26; // [rsp+44h] [rbp-Dh]
  _BYTE v27[32]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v28[2]; // [rsp+68h] [rbp+17h] BYREF
  __int16 v29; // [rsp+78h] [rbp+27h]
  __int64 v30; // [rsp+D0h] [rbp+7Fh] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v5 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v22, a1);
  if ( v22 )
  {
    v5 = 1;
    v28[0] = 0LL;
    v28[1] = 0LL;
    v29 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v27, (struct XDCOBJ *)&v22, 1);
    if ( (v27[24] & 1) != 0 )
    {
      if ( DC::prgnRao(v22) )
        v7 = DC::prgnRao(v6);
      else
        v7 = DC::prgnVisSnap(v6);
      v9 = v7;
      *(_OWORD *)a2 = *(_OWORD *)((char *)v7 + 56);
      v10 = a2[2];
      if ( *a2 >= v10 || (v11 = a2[1], v12 = a2[3], v11 >= v12) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v13 = *((_DWORD *)v8 + 10) & 1LL;
        *a2 -= *((_DWORD *)v8 + 2 * v13 + 254);
        a2[2] = v10 - *((_DWORD *)v8 + 2 * v13 + 254);
        a2[1] = v11 - *((_DWORD *)v8 + 2 * v13 + 255);
        a2[3] = v12 - *((_DWORD *)v8 + 2 * v13 + 255);
        if ( a3 )
        {
          v14 = *((_QWORD *)v8 + 122);
          v25 = *(_DWORD *)(v14 + 208);
          v26 = *(_DWORD *)(v14 + 108) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v24, (struct XDCOBJ *)&v22, 0x402u, 0x80000000);
          if ( v24 )
          {
            if ( (*(_BYTE *)(v24 + 32) & 0x43) != 0x43 )
              bCvtPts1(v24, a2, 2LL);
            if ( v26 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v8 = v22;
        }
        if ( (*(_DWORD *)(*((_QWORD *)v8 + 122) + 108LL) & 1) != 0 )
        {
          v20 = *a2;
          v21 = a2[2];
          if ( *a2 > v21 )
          {
            *a2 = v21;
            a2[2] = v20;
          }
        }
      }
      v30 = ((unsigned __int64)v9 + 24) & -(__int64)(v9 != 0LL);
      v5 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v30);
    }
    else
    {
      v19 = v22;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v19 + 62) )
        v5 = (*((_DWORD *)v19 + 9) & 0x5000) == 4096;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v27);
    if ( v28[0] )
    {
      if ( (_BYTE)v29 )
      {
        *(_DWORD *)(v28[0] + 40LL) &= ~2u;
        LOBYTE(v29) = 0;
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v28);
    }
    v15 = v22;
    if ( v22 )
    {
      if ( (_DWORD)v23 && (*((_DWORD *)v22 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v23) )
        {
          UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v22);
          v15 = v22;
          if ( UserAttr )
          {
            DC::RestoreAttributes(v22, UserAttr);
            v15 = v22;
          }
        }
        *((_DWORD *)v15 + 11) &= ~2u;
        v15 = v22;
        LODWORD(v23) = 0;
      }
      v17 = *(HDC *)v15;
      LODWORD(v30) = 0;
      HmgDecrementExclusiveReferenceCountEx(v15, HIDWORD(v23), &v30);
      if ( (_DWORD)v30 )
        GrepDeleteDC(v17, 0x2000000u);
    }
  }
  return v5;
}
