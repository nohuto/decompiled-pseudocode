/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140064620
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015E60 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140029D4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062920 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessServerOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        __int64 a2)
{
  CCrossProcessBaseEndpoint *v2; // r13
  const struct APO_CONNECTION_PROPERTY *v3; // rsi
  UINT32 u32ValidFrameCount; // r14d
  __int64 v6; // r15
  APO_BUFFER_FLAGS u32BufferFlags; // r8d
  __int64 v8; // r9
  unsigned int v9; // r10d
  __int128 v10; // xmm1
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  unsigned int v15; // r12d
  unsigned int v16; // r12d
  unsigned int v17; // r9d
  float v18; // xmm0_4
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rcx
  void (__fastcall *v22)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD); // rax
  unsigned __int64 v23; // rcx
  APO_BUFFER_FLAGS v24; // [rsp+28h] [rbp-58h]
  unsigned int Size; // [rsp+40h] [rbp-40h]
  __int128 v26; // [rsp+48h] [rbp-38h] BYREF
  __int128 v27; // [rsp+58h] [rbp-28h]
  __int64 v28; // [rsp+68h] [rbp-18h]

  v2 = (CCrossProcessServerOutputEndpoint *)((char *)this - 456);
  v3 = (const struct APO_CONNECTION_PROPERTY *)a2;
  if ( (byte_140090541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, a2, (__int64)this - 456, 11, *(_DWORD *)(a2 + 8), 0, 0);
  u32ValidFrameCount = v3->u32ValidFrameCount;
  if ( u32ValidFrameCount )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this - 48) + 164LL) & 1) != 0 )
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), 0LL, 0LL);
      if ( CCrossProcessBaseEndpoint::IsValidOffset(v2, v6) )
      {
        u32BufferFlags = v3->u32BufferFlags;
        if ( u32BufferFlags )
        {
          v8 = *((_QWORD *)this - 47);
          v9 = *((_DWORD *)this - 92);
          v10 = *((_OWORD *)this + 7);
          a2 = v6 % *((unsigned int *)this - 76);
          v11 = *((_DWORD *)this + 4);
          v12 = u32ValidFrameCount * v9;
          v13 = *(_DWORD *)(v8 + 160) + a2;
          v26 = *((_OWORD *)this + 6);
          v28 = *((_QWORD *)this + 16);
          v27 = v10;
          if ( v11 )
          {
            if ( v11 != 1 )
              goto LABEL_21;
            v14 = *((_DWORD *)this + 22);
            v15 = *(_DWORD *)(v8 + 164);
            if ( !v14 )
              v14 = v12;
            if ( v14 + v13 <= v15 )
            {
              if ( u32BufferFlags != BUFFER_SILENT )
                memcpy_0((void *)(*((_QWORD *)this - 48) + v13), *((const void **)this - 43), v14);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), v14);
              (*(void (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*((_QWORD *)this - 57) + 88LL))(
                (char *)this - 456,
                1LL,
                v13,
                v14 / *((_DWORD *)this - 92),
                &v26,
                v3->u32BufferFlags,
                0);
              goto LABEL_21;
            }
            v16 = v15 - v13;
            Size = v14 - v16;
            if ( u32BufferFlags != BUFFER_SILENT )
            {
              memcpy_0((void *)(*((_QWORD *)this - 48) + v13), *((const void **)this - 43), v16);
              memcpy_0(
                (void *)(*((_QWORD *)this - 48) + *(unsigned int *)(*((_QWORD *)this - 47) + 160LL)),
                (const void *)(v16 + *((_QWORD *)this - 43)),
                Size);
              u32BufferFlags = v3->u32BufferFlags;
              v9 = *((_DWORD *)this - 92);
            }
            (*(void (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*((_QWORD *)this - 57) + 88LL))(
              (char *)this - 456,
              1LL,
              v13,
              v16 / v9,
              &v26,
              u32BufferFlags,
              0);
            v17 = *((_DWORD *)this - 92);
            v18 = *((float *)this - 75);
            v19 = *((_QWORD *)this - 57);
            v20 = *((_QWORD *)this - 47);
            v21 = v16 / v17;
            *(_QWORD *)&v27 = v27 - v21;
            v24 = v3->u32BufferFlags;
            v22 = *(void (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(v19 + 88);
            HIDWORD(v28) = 2;
            *((_QWORD *)&v27 + 1) += (unsigned int)(int)((double)(int)v21 * 10000000.0 / v18 + 0.5);
            v22((char *)this - 456, 1LL, *(unsigned int *)(v20 + 160), Size / v17, &v26, v24, 0);
            v23 = v14;
          }
          else
          {
            (*(void (__fastcall **)(char *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, int))(*((_QWORD *)this - 57) + 88LL))(
              (char *)this - 456,
              1LL,
              v13,
              u32ValidFrameCount,
              &v26,
              u32BufferFlags,
              1);
            if ( v3->u32BufferFlags == BUFFER_INVALID )
              goto LABEL_21;
            v23 = v12;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 48) + 16LL), v23);
        }
      }
    }
  }
LABEL_21:
  *((_DWORD *)this + 4) = 3;
  if ( (byte_140090541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      v3->u32ValidFrameCount,
      a2,
      (__int64)v2,
      12,
      v3->u32ValidFrameCount,
      0,
      v3->u32BufferFlags);
}
