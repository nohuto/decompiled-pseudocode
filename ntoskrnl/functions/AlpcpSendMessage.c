__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, unsigned __int64 a3, char a4)
{
  _QWORD *v7; // r13
  __int64 v8; // r9
  _BYTE *v9; // r11
  int v10; // r14d
  int v11; // eax
  __m256i *v12; // rax
  int v13; // esi
  unsigned __int16 v14; // r12
  bool v15; // cl
  __int16 v16; // bx
  __int64 v17; // rax
  __int64 result; // rax
  int v19; // r10d
  bool v20; // al
  unsigned __int16 v21; // cx
  __int16 v22; // bx
  ULONG_PTR Blob; // rax
  ULONG_PTR v24; // rdi
  int v25; // ebx
  signed __int32 v26; // eax
  int v27; // ebx
  unsigned __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int8 *v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // ebx
  int v36; // r8d
  __int64 v37; // rax
  _BYTE *v38; // r9
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rcx
  char v42; // dl
  void **v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rbx
  bool v46; // di
  bool v47; // zf
  int v48; // [rsp+30h] [rbp-E8h]
  __m256i v49; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+58h] [rbp-C0h]
  ULONG_PTR v51; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE *v52; // [rsp+68h] [rbp-B0h]
  __int64 v53; // [rsp+70h] [rbp-A8h]
  __m128i v54; // [rsp+78h] [rbp-A0h]
  __int64 v55; // [rsp+88h] [rbp-90h]
  _QWORD v56[17]; // [rsp+90h] [rbp-88h] BYREF

  memset(&v49, 0, sizeof(v49));
  v50 = 0LL;
  v7 = 0LL;
  v51 = 0LL;
  memset(v56, 0, 0x48uLL);
  v9 = *(_BYTE **)a1;
  v52 = v9;
  v10 = *(_DWORD *)(a1 + 48);
  v11 = *((_DWORD *)v9 + 104);
  if ( (v11 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v11 & 8) != 0 )
    return 3221227271LL;
  if ( (v11 & 0x20) != 0 && (*((_DWORD *)v9 + 64) & 0x1000) == 0 )
    return 3221225527LL;
  if ( a4 )
  {
    if ( (v10 & 0xC0000000) == 0x80000000 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a2;
      v54 = *(__m128i *)v17;
      v55 = *(_QWORD *)(v17 + 16);
      v14 = _mm_cvtsi128_si32(v54);
      v49.m256i_i16[0] = v14;
      v49.m256i_i16[1] = v14 + 40;
      v49.m256i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v54, 4));
      v49.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v54, 8));
      v49.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v54, 12));
      v13 = v55;
      v49.m256i_i32[6] = v55;
      v50 = HIDWORD(v55);
    }
    else
    {
      v12 = a2;
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v12 = (__m256i *)0x7FFFFFFF0000LL;
      v49 = *v12;
      v50 = v12[1].m256i_i64[0];
      v13 = v49.m256i_i32[6];
      v14 = v49.m256i_i16[0];
    }
    v15 = (*((_DWORD *)v9 + 64) & 0x1000) != 0 || (v10 & 2) != 0;
    if ( v14 < (unsigned __int16)(v14 + 40) )
    {
      if ( v15 )
      {
        if ( (unsigned __int64)v14 + 40 <= v49.m256i_u16[1] )
        {
          v49.m256i_i16[1] = v14 + 40;
          goto LABEL_15;
        }
      }
      else if ( v14 + 40LL == v49.m256i_u16[1] )
      {
LABEL_15:
        v16 = v49.m256i_i16[2] & 0x7FFF;
        v49.m256i_i16[2] &= ~0x8000u;
        if ( v49.m256i_i16[3] )
        {
          result = AlpcpValidateDataInformation(a2, &v49);
          if ( (int)result < 0 )
            return result;
          v9 = v52;
        }
        v19 = v10 & 2;
        goto LABEL_27;
      }
    }
    return 3221225485LL;
  }
  v49 = *a2;
  v50 = a2[1].m256i_i64[0];
  v42 = (*((_DWORD *)v9 + 64) & 0x1000) != 0 || (v10 & 2) != 0;
  result = AlpcpValidateMessage((unsigned __int16 *)&v49, v42);
  if ( (int)result < 0 )
    return result;
  v13 = v49.m256i_i32[6];
  v16 = v49.m256i_i16[2];
  v14 = v49.m256i_i16[0];
LABEL_27:
  v20 = (*((_DWORD *)v9 + 64) & 0x1000) != 0 || v19;
  v21 = (unsigned __int8)v16;
  v22 = v16 & 0xFF00;
  if ( v20 )
  {
    if ( (v10 & 1) != 0 )
    {
      if ( v13 )
      {
        v22 = 0;
        v21 = 2;
LABEL_107:
        v49.m256i_i32[6] = v13;
        if ( !a4 )
          LODWORD(v50) = 0;
        goto LABEL_39;
      }
    }
    else if ( (v10 & 0x10000) != 0 )
    {
      if ( !v21 )
      {
        v21 = 3;
LABEL_106:
        v13 = 0;
        goto LABEL_107;
      }
      if ( (v21 == 6 || v21 == 3 || v21 == 4 || v21 == 5 || v21 == 13) && v19 )
        goto LABEL_106;
    }
    else
    {
      if ( !v21 )
      {
        v21 = 1;
        goto LABEL_106;
      }
      if ( v21 == 1 )
      {
        if ( !v13 )
          return 3221225485LL;
        goto LABEL_107;
      }
      if ( v21 == 7 || (unsigned int)v21 - 8 <= 1 )
      {
        if ( !v19 )
          return 3221225485LL;
        goto LABEL_106;
      }
    }
    return 3221225485LL;
  }
  if ( v21 != 7 || a4 )
  {
    if ( v13 > 0 )
    {
      v21 = ((v10 & 0x10000) != 0) + 1;
    }
    else if ( (v10 & 0x10000) != 0 )
    {
      v21 = 3;
    }
    else
    {
      v21 = 1;
    }
  }
  if ( !v13 && *(_OWORD *)&v49.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_39:
  v49.m256i_i16[2] = v21 | v22 & 0xEFFF;
  if ( (unsigned __int64)v49.m256i_u16[1] > *((_QWORD *)v9 + 34) )
    return 3221225519LL;
  if ( (v10 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v13 = v49.m256i_i32[6];
    v14 = v49.m256i_i16[0];
  }
  if ( !v13 )
  {
    Blob = AlpcpAllocateBlob(AlpcMessageType, 792LL);
    v24 = Blob;
    if ( Blob )
    {
      AlpcpLockForCachedReferenceBlob(Blob);
      v25 = *(_DWORD *)(v24 + 264);
      memset((void *)v24, 0, 0x118uLL);
      *(_WORD *)(v24 + 242) = 40;
      --*(_WORD *)(v24 - 30);
      *(_DWORD *)(v24 + 264) = v25 & 0x7FFFFFFF;
      do
        v26 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v26 );
      *(_DWORD *)(v24 + 272) = v26;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterAllocationEventMessageLog(v24);
      *(_WORD *)(v24 + 242) = 40;
      v27 = 0;
      v13 = v49.m256i_i32[6];
      v14 = v49.m256i_i16[0];
      goto LABEL_48;
    }
    return (unsigned int)-1073741670;
  }
  v10 |= 0x10u;
  v27 = AlpcpLookupMessage((__int64)v9, v13, v50, v8, &v51);
  v48 = v27;
  v24 = v51;
  if ( v27 >= 0 )
  {
    v36 = *(_DWORD *)(v51 + 40);
    if ( (v36 & 0x80u) == 0 )
    {
      v37 = *(_QWORD *)(v51 + 24);
      v53 = v37;
      if ( !v37 )
        goto LABEL_82;
      v38 = *(_BYTE **)(v51 + 16);
      if ( v38 == v52 )
      {
        v39 = v36 & 7;
      }
      else
      {
        v39 = v36 & 7;
        if ( (v36 & 7) == 0 )
        {
          v45 = *(_QWORD *)(v37 + 16);
          ExAcquirePushLockSharedEx(v45 - 16, 0LL);
          if ( ((*(_DWORD *)(v53 + 416) >> 1) & 3) == 2 )
            v46 = *(_BYTE **)v45 == v52 || *(_BYTE **)(v45 + 8) == v52;
          else
            v46 = *(_QWORD *)(v45 + 16) == (_QWORD)v52;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v45 - 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v45 - 16));
          KeAbPostRelease(v45 - 16);
          v47 = !v46;
          v24 = v51;
          if ( !v47 )
          {
            v13 = v49.m256i_i32[6];
            v14 = v49.m256i_i16[0];
            v27 = v48;
            goto LABEL_82;
          }
          goto LABEL_160;
        }
        if ( (v52[416] & 6) != 6 )
          goto LABEL_160;
        v43 = (void **)*((_QWORD *)v52 + 2);
        if ( !v43 || *v43 != v38 )
          goto LABEL_160;
      }
      if ( v39 == 3 && (v36 & 0x2000) == 0 )
      {
LABEL_82:
        if ( *(_QWORD *)(v24 + 32) && !*(_QWORD *)(v24 + 48) && (v10 & 0x30000) == 0 )
        {
          v44 = 792LL;
          if ( *(_QWORD *)(v24 + 224) )
            v44 = *(_QWORD *)(v24 + 232) + 792LL;
          v27 = AlpcpChargePagedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, v44);
          if ( v27 < 0 )
          {
            AlpcpUnlockMessage(v51);
            return (unsigned int)v27;
          }
          *(_QWORD *)(v24 + 48) = KeGetCurrentThread()->ApcState.Process;
          ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
          v13 = v49.m256i_i32[6];
          v14 = v49.m256i_i16[0];
          v24 = v51;
        }
        goto LABEL_85;
      }
LABEL_160:
      AlpcpUnlockMessage(v24);
      return 3221225506LL;
    }
  }
LABEL_85:
  if ( v27 < 0 )
    return (unsigned int)v27;
LABEL_48:
  v28 = a3;
  if ( a3 )
  {
    v7 = v56;
    v27 = AlpcpCaptureAttributes(v52, v10, a3, v24, v56);
    v28 = a3;
  }
  if ( !v13 || (v34 = *(_DWORD *)(v24 + 40), (v34 & 0x280) == 0) )
  {
    if ( v27 >= 0 )
    {
      if ( v13 )
      {
        v40 = *(_QWORD *)(v24 + 208);
        if ( v40 )
        {
          PsReleaseProcessWakeCounter(v40);
          *(_QWORD *)(v24 + 208) = 0LL;
        }
        v41 = *(_QWORD *)(v24 + 216);
        if ( v41 )
        {
          PsReleaseProcessWakeCounter(v41);
          *(_QWORD *)(v24 + 216) = 0LL;
        }
      }
      v29 = 0LL;
      if ( v13 > 0 )
      {
        v29 = *(_QWORD *)(v24 + 160);
        *(_QWORD *)(v24 + 160) = 0LL;
        AlpcpReleaseAttributes((_QWORD *)(v24 + 104));
      }
      if ( v7 )
      {
        *(_OWORD *)(v24 + 104) = *(_OWORD *)v7;
        *(_OWORD *)(v24 + 120) = *((_OWORD *)v7 + 1);
        *(_OWORD *)(v24 + 136) = *((_OWORD *)v7 + 2);
        *(_OWORD *)(v24 + 152) = *((_OWORD *)v7 + 3);
        *(_QWORD *)(v24 + 168) = v7[8];
      }
      if ( v29 )
        *(_QWORD *)(v24 + 160) = v29;
      v30 = 24LL;
      if ( (v10 & 0xC0000000) != 0x80000000 )
        v30 = 40LL;
      v31 = &a2->m256i_i8[v30];
      if ( a4 && (unsigned __int64)&v31[v14] > 0x7FFFFFFF0000LL )
      {
        v27 = -1073741819;
      }
      else
      {
        *(_QWORD *)(v24 + 176) = v31;
        v32 = *(_QWORD *)(v24 + 96);
        if ( v32 )
          v33 = *(_QWORD *)(v32 + 32) - 40LL;
        else
          v33 = 512LL;
        if ( v14 > v33 )
          v27 = AlpcpCaptureMessageData(v24, v14, 0LL);
        else
          v27 = 0;
        if ( v27 >= 0 )
        {
          *(_QWORD *)(a1 + 8) = v24;
          *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v49.m256i_i32 + 2);
          *(_WORD *)(a1 + 56) = v49.m256i_i16[3];
          if ( !*(_QWORD *)(v24 + 24) )
            return AlpcpDispatchNewMessage(a1);
          if ( *(_QWORD *)(v24 + 32) )
            return AlpcpDispatchReplyToWaitingThread(a1);
          return AlpcpDispatchReplyToPort(a1);
        }
      }
    }
    AlpcpUnlockMessage(v24);
    return (unsigned int)v27;
  }
  v35 = (v34 & 0x80u) != 0 ? 0xC0000703 : 0;
  if ( v28 )
    AlpcpReleaseAttributes(v7);
  AlpcpCancelMessage((__int64)v52, v24, 0x10000);
  return v35;
}
