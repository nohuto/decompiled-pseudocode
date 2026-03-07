void __fastcall ClipCurrentCursor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct CURSOR_CLIP_PARAMS *a3)
{
  UINT Height; // r8d
  UINT v7; // r14d
  int v8; // edi
  UINT Pitch; // edx
  int v10; // edi
  UINT v11; // ecx
  UINT v12; // edi
  __int64 v13; // rdi
  _BYTE *v14; // r8
  _BYTE *v15; // r9
  char v16; // dl
  char v17; // r13
  char v18; // r12
  __int64 v19; // r11
  void *v20; // rax
  const void *v21; // rcx
  bool v22; // zf
  UINT v23; // r14d
  UINT v24; // edi
  __int64 v25; // rdi
  _BYTE *v26; // rsi
  _BYTE *v27; // r14
  unsigned int v28; // ecx
  char v29; // dl
  char v30; // bp
  __int64 v31; // r13
  __int64 v32; // r8
  void *v33; // rbx
  const void *v34; // r15
  UINT v35; // edi
  __int64 v36; // rdi
  _BYTE *v37; // rsi
  _BYTE *v38; // r14
  unsigned int v39; // ecx
  char v40; // dl
  char v41; // r8
  __int64 v42; // r12
  __int64 v43; // r13
  void *v44; // rbx
  const void *v45; // rbp
  _BYTE *v46; // [rsp+50h] [rbp-68h]
  __int64 v47; // [rsp+58h] [rbp-60h]
  __int64 v48; // [rsp+60h] [rbp-58h]
  int v49; // [rsp+C0h] [rbp+8h]
  char v50; // [rsp+C0h] [rbp+8h]
  char v51; // [rsp+C0h] [rbp+8h]
  char v52; // [rsp+C0h] [rbp+8h]
  _BYTE *v53; // [rsp+C8h] [rbp+10h]
  char v54; // [rsp+C8h] [rbp+10h]
  char v55; // [rsp+C8h] [rbp+10h]
  _BYTE *v56; // [rsp+D0h] [rbp+18h]
  __int64 v57; // [rsp+D0h] [rbp+18h]
  char v58; // [rsp+D0h] [rbp+18h]
  _BYTE *v59; // [rsp+D8h] [rbp+20h]

  a2->Flags.Value = a1->Flags.Value;
  a2->Width = a1->Width;
  Height = a1->Height;
  v7 = 0;
  v8 = *((_DWORD *)a3 + 5);
  a2->Height = Height;
  Pitch = a1->Pitch;
  a2->Pitch = Pitch;
  a2->XHot = a1->XHot;
  a2->YHot = a1->YHot;
  if ( (v8 & 1) != 0 )
    v7 = a1->Pitch * (a1->Height - *((_DWORD *)a3 + 1));
  v10 = v8 & 4;
  if ( v10 )
  {
    v11 = a1->Width - *(_DWORD *)a3;
    if ( (a1->Flags.Value & 1) != 0 )
      v7 += v11 >> 3;
    else
      v7 += 4 * v11;
  }
  v49 = *((_DWORD *)a3 + 3);
  if ( (a1->Flags.Value & 1) != 0 )
  {
    memset((void *)a2->pPixels, 255, Pitch * Height);
    if ( v49 )
    {
      if ( v10 )
        v12 = *(_DWORD *)a3 + 8 * a1->Pitch - a1->Width;
      else
        v12 = *(_DWORD *)a3;
      v13 = v12 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        WdLogSingleEntry1(1LL, 143LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        WdLogSingleEntry1(1LL, 144LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v13 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v14 = (char *)a2->pPixels + v7;
    v15 = (char *)a1->pPixels + v7;
    v59 = v14;
    v46 = v15;
    if ( *((_DWORD *)a3 + 1) )
    {
      v16 = *((_BYTE *)a3 + 17);
      v17 = *((_BYTE *)a3 + 16);
      v18 = 8 - v16;
      v19 = *((unsigned int *)a3 + 2);
      v48 = v19;
      v50 = v16;
      v47 = *((unsigned int *)a3 + 1);
      do
      {
        v20 = v14;
        v21 = v15;
        v53 = v14;
        v56 = v15;
        if ( v17 )
        {
          v16 = v50;
          v20 = v14 + 1;
          *v14 = ((1 << v17) - 1) & *v15 | *v14 & ~((1 << v17) - 1);
          v21 = v15 + 1;
          v56 = v15 + 1;
          v53 = v14 + 1;
        }
        if ( (_DWORD)v13 )
        {
          memmove(v20, v21, (unsigned int)v13);
          v14 = v59;
          v15 = v46;
          v19 = v48;
          v16 = v50;
        }
        if ( v16 )
        {
          v16 = v50;
          v53[v13] = ((1 << v18) - 1) & v53[v13] | ~((1 << v18) - 1) & v56[v13];
        }
        v14 += v19;
        v15 += v19;
        v22 = v47-- == 1;
        v59 = v14;
        v46 = v15;
      }
      while ( !v22 );
    }
    v23 = a2->Height * a2->Pitch + v7;
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( (*((_DWORD *)a3 + 5) & 4) != 0 )
        v24 = *(_DWORD *)a3 + 8 * a1->Pitch - a1->Width;
      else
        v24 = *(_DWORD *)a3;
      v25 = v24 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        WdLogSingleEntry1(1LL, 143LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        WdLogSingleEntry1(1LL, 144LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v25 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v26 = (char *)a1->pPixels + v23;
    v27 = (char *)a2->pPixels + v23;
    v28 = *((_DWORD *)a3 + 1);
    if ( v28 )
    {
      v29 = *((_BYTE *)a3 + 16);
      v30 = 8 - *((_BYTE *)a3 + 17);
      v31 = *((unsigned int *)a3 + 2);
      v32 = v28;
      v54 = v29;
      v51 = *((_BYTE *)a3 + 17);
      v57 = *((unsigned int *)a3 + 1);
      do
      {
        v33 = v27;
        v34 = v26;
        if ( v29 )
        {
          v33 = v27 + 1;
          v34 = v26 + 1;
          *v27 = ((1 << v29) - 1) & *v26 | *v27 & ~((1 << v29) - 1);
        }
        if ( (_DWORD)v25 )
        {
          memmove(v33, v34, (unsigned int)v25);
          v32 = v57;
        }
        if ( v51 )
          *((_BYTE *)v33 + v25) = ((1 << v30) - 1) & *((_BYTE *)v33 + v25) | ~((1 << v30) - 1) & *((_BYTE *)v34 + v25);
        v29 = v54;
        v27 += v31;
        v26 += v31;
        v57 = --v32;
      }
      while ( v32 );
    }
  }
  else
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( v10 )
        v35 = *(_DWORD *)a3 + 8 * a1->Pitch - a1->Width;
      else
        v35 = *(_DWORD *)a3;
      v36 = v35 >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        WdLogSingleEntry1(1LL, 143LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        WdLogSingleEntry1(1LL, 144LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v36 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v37 = (char *)a1->pPixels + v7;
    v38 = (char *)a2->pPixels + v7;
    v39 = *((_DWORD *)a3 + 1);
    if ( v39 )
    {
      v40 = *((_BYTE *)a3 + 16);
      v41 = 8 - *((_BYTE *)a3 + 17);
      v42 = *((unsigned int *)a3 + 2);
      v43 = v39;
      v52 = v41;
      v58 = v40;
      v55 = *((_BYTE *)a3 + 17);
      do
      {
        v44 = v38;
        v45 = v37;
        if ( v40 )
        {
          v44 = v38 + 1;
          v45 = v37 + 1;
          *v38 = ((1 << v40) - 1) & *v37 | *v38 & ~((1 << v40) - 1);
        }
        if ( (_DWORD)v36 )
        {
          memmove(v44, v45, (unsigned int)v36);
          v41 = v52;
        }
        if ( v55 )
          *((_BYTE *)v44 + v36) = ((1 << v41) - 1) & *((_BYTE *)v44 + v36) | ~((1 << v41) - 1) & *((_BYTE *)v45 + v36);
        v40 = v58;
        v38 += v42;
        v37 += v42;
        --v43;
      }
      while ( v43 );
    }
  }
}
