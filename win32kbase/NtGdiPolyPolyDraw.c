__int64 __fastcall NtGdiPolyPolyDraw(__int64 a1, void *a2, void *a3, unsigned int a4, int a5)
{
  __int64 v5; // r13
  __int64 PolyPolygonRgnInternal; // rdi
  int v9; // eax
  int v10; // r14d
  int v11; // eax
  unsigned int *v13; // r12
  struct _POINTL *v14; // r15
  void *v15; // rdx
  char *v16; // rcx
  unsigned int v17; // r13d
  __int64 i; // rcx
  size_t v19; // r8
  void *v20; // rdx
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, struct _POINTL *, _QWORD); // rax
  int v23; // eax
  __int64 (__fastcall *v24)(__int64, struct _POINTL *, unsigned int *, _QWORD, unsigned int); // rax
  unsigned int v26; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v27; // [rsp+38h] [rbp-E0h]
  unsigned int v28; // [rsp+40h] [rbp-D8h]
  int v29; // [rsp+44h] [rbp-D4h]
  unsigned int *v30; // [rsp+48h] [rbp-D0h]
  unsigned int v31; // [rsp+50h] [rbp-C8h]
  __int64 v32; // [rsp+58h] [rbp-C0h]
  struct _POINTL *v33; // [rsp+60h] [rbp-B8h]
  void *Src; // [rsp+68h] [rbp-B0h]
  void *v35; // [rsp+70h] [rbp-A8h]
  __int64 v36; // [rsp+78h] [rbp-A0h]
  _BYTE v37[80]; // [rsp+80h] [rbp-98h] BYREF

  v5 = a4;
  Src = a3;
  v35 = a2;
  v27 = a1;
  v36 = a1;
  v31 = a4;
  v28 = 0;
  PolyPolygonRgnInternal = 1LL;
  v32 = 1LL;
  v26 = 0;
  if ( !a4 )
    return 0LL;
  if ( a5 == 2 )
  {
    if ( qword_1C02D5E68 )
    {
      v9 = qword_1C02D5E68();
      v10 = -1073741637;
      a1 = v27;
    }
    else
    {
      v10 = -1073741637;
      v9 = -1073741637;
    }
    if ( v9 < 0 )
      return PolyPolygonRgnInternal;
    v11 = (int)qword_1C02D5E70;
    if ( qword_1C02D5E70 )
      v11 = qword_1C02D5E70(a1, a2, a3, (unsigned int)v5);
    if ( v11 )
      return PolyPolygonRgnInternal;
  }
  else
  {
    v10 = -1073741637;
  }
  if ( (unsigned int)v5 <= 1 )
  {
    v13 = &v26;
    goto LABEL_22;
  }
  if ( (unsigned int)(a5 - 3) > 2 )
  {
    if ( (unsigned int)v5 > 0x9C4000 )
    {
      EngSetLastError(0x57u);
    }
    else if ( 4 * (_DWORD)v5 )
    {
      v13 = (unsigned int *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              0x104uLL,
                              (unsigned int)(4 * v5),
                              0x706D7447u);
      goto LABEL_22;
    }
    v13 = 0LL;
LABEL_22:
    v30 = v13;
    if ( v13 )
    {
      v14 = (struct _POINTL *)v37;
      v33 = (struct _POINTL *)v37;
      v29 = 0;
      v15 = Src;
      v16 = (char *)Src + 4 * v5;
      if ( v16 < Src || (unsigned __int64)v16 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v13, v15, 4 * v5);
      v17 = 0;
      v28 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v29 = i;
        if ( (unsigned int)i >= a4 )
          break;
        v17 += v13[i];
        v28 = v17;
      }
      if ( v17 > 0x4E2000 )
        goto LABEL_37;
      if ( v17 > 0xA )
      {
        v14 = (struct _POINTL *)AllocFreeTmpBuffer(8 * v17);
        v33 = v14;
      }
      if ( v14 )
      {
        v19 = 8LL * v17;
        v20 = v35;
        if ( (char *)v35 + v19 < v35 || (unsigned __int64)v35 + v19 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v14, v20, v19);
      }
      else
      {
LABEL_37:
        PolyPolygonRgnInternal = 0LL;
        v32 = 0LL;
      }
      v21 = v27;
      if ( !PolyPolygonRgnInternal )
        goto LABEL_61;
      if ( a5 == 1 )
      {
        if ( qword_1C02D5E58 )
          v10 = qword_1C02D5E58(a4, v27);
        if ( v10 < 0 )
          goto LABEL_60;
        v24 = (__int64 (__fastcall *)(__int64, struct _POINTL *, unsigned int *, _QWORD, unsigned int))qword_1C02D5E60;
      }
      else
      {
        if ( a5 != 2 )
        {
          switch ( a5 )
          {
            case 3:
              if ( qword_1C02D5E78 )
                v10 = qword_1C02D5E78(a4, v27);
              if ( v10 < 0 )
                goto LABEL_60;
              v22 = (__int64 (__fastcall *)(__int64, struct _POINTL *, _QWORD))qword_1C02D5E80;
              break;
            case 4:
              if ( qword_1C02D5EA8 )
                v10 = qword_1C02D5EA8(a4, v27);
              if ( v10 < 0 )
                goto LABEL_60;
              v22 = (__int64 (__fastcall *)(__int64, struct _POINTL *, _QWORD))qword_1C02D5EB0;
              break;
            case 5:
              if ( qword_1C02D5E98 )
                v10 = qword_1C02D5E98(a4, v27);
              if ( v10 >= 0 )
              {
                v22 = (__int64 (__fastcall *)(__int64, struct _POINTL *, _QWORD))qword_1C02D5EA0;
                break;
              }
LABEL_60:
              PolyPolygonRgnInternal = 0LL;
              goto LABEL_61;
            case 6:
              PolyPolygonRgnInternal = GreCreatePolyPolygonRgnInternal(v14, v17);
              goto LABEL_61;
            default:
              goto LABEL_60;
          }
          if ( v22 )
          {
            v23 = v22(v27, v14, v26);
LABEL_77:
            PolyPolygonRgnInternal = v23;
LABEL_61:
            if ( v14 && v14 != (struct _POINTL *)v37 )
              FreeTmpBuffer(v14, v21);
            if ( v13 != &v26 )
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
            return PolyPolygonRgnInternal;
          }
          goto LABEL_76;
        }
        if ( qword_1C02D5E88 )
          v10 = qword_1C02D5E88(a4, v27);
        if ( v10 < 0 )
          goto LABEL_60;
        v24 = (__int64 (__fastcall *)(__int64, struct _POINTL *, unsigned int *, _QWORD, unsigned int))qword_1C02D5E90;
      }
      if ( v24 )
      {
        v23 = v24(v27, v14, v13, a4, v17);
        goto LABEL_77;
      }
LABEL_76:
      v23 = 0;
      goto LABEL_77;
    }
    return 0LL;
  }
  return 0LL;
}
