__int64 __fastcall FLOODBM::bExtendScanline(
        FLOODBM *this,
        struct STACKOBJ *a2,
        struct STACKOBJ *a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  _DWORD *v6; // r10
  FLOODBM *v8; // rsi
  struct SCANLINE *v9; // rdx
  struct SCANLINE *v10; // r15
  _DWORD *v11; // r11
  _DWORD *v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rax
  int v15; // r12d
  int v16; // r13d
  int v17; // esi
  int v18; // r14d
  __int64 v19; // rcx
  int v20; // ebx
  int v22; // [rsp+40h] [rbp-18h] BYREF
  int v23; // [rsp+44h] [rbp-14h]
  struct SCANLINE *v24; // [rsp+48h] [rbp-10h]
  int v26; // [rsp+A8h] [rbp+50h] BYREF
  STACKOBJ *v27; // [rsp+B0h] [rbp+58h]
  int v28; // [rsp+B8h] [rbp+60h] BYREF

  v27 = a3;
  v6 = (_DWORD *)*((_QWORD *)a3 + 2);
  v8 = this;
  v9 = (struct SCANLINE *)*((_QWORD *)a2 + 1);
  v10 = 0LL;
  v24 = v9;
  v11 = (_DWORD *)*((_QWORD *)a2 + 2);
  v6[1] = 0;
  v11[1] = 0;
  *v6 = *(_DWORD *)v9;
  *v11 = a4;
  v12 = *(_DWORD **)(*((_QWORD *)a2 + 1) + 16LL);
  if ( v12 && *v12 == a4 )
    v10 = *(struct SCANLINE **)(*((_QWORD *)a2 + 1) + 16LL);
  v13 = 1;
  v14 = 0LL;
  v23 = 0;
  if ( *((_DWORD *)v9 + 1) )
  {
    while ( 1 )
    {
      v15 = *((_DWORD *)v9 + 2 * v14 + 7);
      v16 = *((_DWORD *)v9 + 2 * v14 + 6);
      v28 = 0;
      v26 = 0;
      v13 = FLOODBM::bSearchAllSpans(v8, v16, v15, &v28, &v26, a6, a2, v10);
      if ( !v13 )
        break;
      v17 = v28;
      v18 = v26;
      if ( v28 != v26 )
      {
        while ( 1 )
        {
          if ( v17 >= v16 - 1 )
            goto LABEL_13;
          v22 = v16 - 1;
          v13 &= FLOODBM::bSearchAllSpans(this, v17, v16 - 1, &v28, &v22, a5, v27, v24);
          if ( !v13 )
            return v13;
          v16 = v28;
          if ( v28 == v22 || v28 >= v17 - 1 )
          {
            do
            {
LABEL_13:
              if ( v18 <= v15 + 1 )
                break;
              v13 &= FLOODBM::bSearchAllSpans(this, v15 + 1, v18, &v28, &v26, a5, v27, v24);
              if ( !v13 )
                return v13;
              v15 = v26;
              if ( v28 == v26 || v26 <= v18 + 1 )
                break;
              v13 &= FLOODBM::bSearchAllSpans(this, v18 + 1, v26, &v28, &v26, a6, a2, v10);
              if ( !v13 )
                return v13;
              v18 = v26;
            }
            while ( v28 != v26 );
            break;
          }
          v22 = v17 - 1;
          v13 &= FLOODBM::bSearchAllSpans(this, v28, v17 - 1, &v28, &v22, a6, a2, v10);
          if ( !v13 )
            return v13;
          v17 = v28;
          if ( v28 == v22 )
            goto LABEL_13;
        }
      }
      v9 = v24;
      v14 = (unsigned int)(v23 + 1);
      v8 = this;
      v23 = v14;
      if ( (unsigned int)v14 >= *((_DWORD *)v24 + 1) )
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    v19 = *((_QWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) -= *(_DWORD *)(v19 + 8);
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v19 + 16);
    v20 = STACKOBJ::bPushMergeScrScan(a2);
    v13 &= v20 & STACKOBJ::bPushMergeScrScan(v27);
  }
  return v13;
}
