/*
 * XREFs of sub_18006E0A0 @ 0x18006E0A0
 * Callers:
 *     sub_18005238C @ 0x18005238C (sub_18005238C.c)
 * Callees:
 *     sub_180044D3C @ 0x180044D3C (sub_180044D3C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180051F48 @ 0x180051F48 (sub_180051F48.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_1800D8A9C @ 0x1800D8A9C (sub_1800D8A9C.c)
 *     sub_1800D8AF8 @ 0x1800D8AF8 (sub_1800D8AF8.c)
 */

__int64 __fastcall sub_18006E0A0(__int64 a1)
{
  unsigned __int16 **v2; // r8
  int v3; // edx
  HRESULT UBound; // ebx
  __int64 v6; // rcx
  SIZE_T v7; // rsi
  int v8; // r8d
  int v9; // edx
  unsigned int v10; // edi
  LONG v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // rax
  char *v15; // rbx
  int v16; // edx
  int v17; // r9d
  char *v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _WORD *v21; // r9
  int Element; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  _WORD *v25; // rcx
  char *v26; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+28h]
  LONG plUbound; // [rsp+50h] [rbp+30h] BYREF
  unsigned __int64 rgIndices; // [rsp+58h] [rbp+38h] BYREF

  if ( !sub_180051F48(a1, **(_WORD ***)(a1 + 8)) )
  {
    v3 = 3307;
LABEL_3:
    UBound = -2147024809;
LABEL_4:
    sub_18004BD84((int)retaddr, v3, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", UBound);
    return (unsigned int)UBound;
  }
  plUbound = 0;
  v6 = (__int64)*v2;
  v7 = 24LL;
  v8 = **v2;
  switch ( v8 )
  {
    case 8:
      goto LABEL_31;
    case 30:
      UBound = sub_1800D8A9C(*(_QWORD *)(v6 + 8), (unsigned int)(v8 - 30), &rgIndices);
      if ( UBound < 0 )
      {
        v3 = 3358;
        goto LABEL_4;
      }
      if ( rgIndices > 0x400 )
      {
        v9 = 3359;
        goto LABEL_19;
      }
      v7 = rgIndices + 25;
      goto LABEL_39;
    case 31:
LABEL_31:
      v13 = *(_QWORD *)(v6 + 8);
      if ( (_WORD)v8 == 8 )
      {
        UBound = sub_1800D8AF8(v13, 0x7FFFFFFFLL, &rgIndices);
        if ( UBound < 0 )
        {
          v3 = 3342;
          goto LABEL_4;
        }
      }
      else
      {
        UBound = sub_1800D8AF8(v13, 0x7FFFFFFFLL, &rgIndices);
        if ( UBound < 0 )
        {
          v3 = 3346;
          goto LABEL_4;
        }
      }
      if ( rgIndices > 0x400 )
      {
        v9 = 3349;
        goto LABEL_19;
      }
      v7 = rgIndices + 26;
      goto LABEL_39;
    case 65:
    case 70:
      v12 = *(unsigned int *)(v6 + 8);
      if ( (unsigned int)v12 > 0x400 )
      {
        v9 = 3316;
        goto LABEL_19;
      }
      v7 = v12 + 24;
      goto LABEL_39;
  }
  if ( v8 != 8196 )
    goto LABEL_39;
  if ( SafeArrayGetDim(*(SAFEARRAY **)(v6 + 8)) != 1 )
  {
    v3 = 3322;
    goto LABEL_3;
  }
  if ( SafeArrayGetElemsize(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL)) != 4 )
  {
    v3 = 3323;
    goto LABEL_3;
  }
  UBound = SafeArrayGetUBound(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), 1u, &plUbound);
  if ( UBound < 0 )
  {
    v3 = 3324;
    goto LABEL_4;
  }
  if ( plUbound >= 0 )
  {
    v11 = plUbound + 1;
    plUbound = v11;
    if ( (unsigned int)v11 > 0x100 )
    {
      v9 = 3331;
      goto LABEL_19;
    }
    v7 = 4LL * v11 + 24;
LABEL_39:
    v14 = (char *)sub_18006A1B0(v7);
    v15 = v14;
    if ( !v14 )
    {
      v10 = -2147024882;
      v16 = 3372;
      v17 = -2147024882;
LABEL_61:
      sub_18004BD84((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v17);
      goto LABEL_64;
    }
    v18 = v14 + 24;
    v19 = **(_QWORD **)(a1 + 8);
    *(_OWORD *)v14 = *(_OWORD *)v19;
    *((_QWORD *)v14 + 2) = *(_QWORD *)(v19 + 16);
    v20 = *(_QWORD **)(a1 + 8);
    v21 = (_WORD *)*v20;
    if ( *(_WORD *)*v20 != 8 )
    {
      if ( *(_WORD *)*v20 == 30 )
      {
        Element = sub_180044D3C(v15 + 24, v7 - 24, *((_QWORD *)v21 + 1));
        v10 = Element;
        if ( Element < 0 )
        {
          v16 = 3420;
LABEL_60:
          v17 = Element;
          goto LABEL_61;
        }
LABEL_62:
        *((_QWORD *)v15 + 1) = 24LL;
        goto LABEL_63;
      }
      if ( *(_WORD *)*v20 != 31 )
      {
        if ( *(_WORD *)*v20 == 65 || *(_WORD *)*v20 == 70 )
        {
          memcpy(v15 + 24, *((const void **)v21 + 2), *((unsigned int *)v21 + 2));
          *((_QWORD *)v15 + 2) = 24LL;
        }
        else if ( *(_WORD *)*v20 == 8196 )
        {
          LODWORD(rgIndices) = 0;
          *((_QWORD *)v15 + 1) = 24LL;
          if ( plUbound > 0 )
          {
            while ( 1 )
            {
              Element = SafeArrayGetElement(*(SAFEARRAY **)(**(_QWORD **)(a1 + 8) + 8LL), (LONG *)&rgIndices, v18);
              v10 = Element;
              if ( Element < 0 )
                break;
              v18 += 4;
              LODWORD(rgIndices) = rgIndices + 1;
              if ( (int)rgIndices >= plUbound )
                goto LABEL_63;
            }
            v16 = 3395;
            goto LABEL_60;
          }
        }
LABEL_63:
        ***(_QWORD ***)(a1 + 16) = v7;
        v26 = v15;
        v15 = 0LL;
        v10 = 0;
        **(_QWORD **)(a1 + 24) = v26;
LABEL_64:
        if ( v15 )
          sub_18006A148(v15);
        return v10;
      }
    }
    v23 = *((_QWORD *)v21 + 1);
    v24 = v7 - 24;
    v25 = v15 + 24;
    if ( *(_WORD *)*v20 == 8 )
    {
      Element = sub_180061BA0(v25, v24, v23);
      v10 = Element;
      if ( Element < 0 )
      {
        v16 = 3406;
        goto LABEL_60;
      }
    }
    else
    {
      Element = sub_180061BA0(v25, v24, v23);
      v10 = Element;
      if ( Element < 0 )
      {
        v16 = 3411;
        goto LABEL_60;
      }
    }
    goto LABEL_62;
  }
  v9 = 3325;
LABEL_19:
  v10 = -2147024882;
  sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147024882);
  return v10;
}
