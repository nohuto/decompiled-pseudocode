/*
 * XREFs of IopLiveDumpAllocateExtraBuffers @ 0x14094A230
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1409495FC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x1405456B4 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1405579B4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure @ 0x14055882C (IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094AFA4 (IopLiveDumpDiscardVirtualAddressRange.c)
 */

__int64 __fastcall IopLiveDumpAllocateExtraBuffers(__int64 a1)
{
  __int64 MillisecondCounter; // rax
  unsigned __int64 v3; // r13
  _QWORD *v4; // r12
  unsigned int v5; // r15d
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  _QWORD *v12; // r13
  int v13; // ebx
  bool v14; // al
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  __int64 IndependentPages; // rax
  void *v23; // rcx
  bool v25; // [rsp+58h] [rbp-49h] BYREF
  __int64 v26; // [rsp+60h] [rbp-41h]
  int v27; // [rsp+68h] [rbp-39h] BYREF
  __int64 v28; // [rsp+70h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+78h] [rbp-29h] BYREF
  __int64 *v30; // [rsp+98h] [rbp-9h]
  __int64 v31; // [rsp+A0h] [rbp-1h]
  bool *v32; // [rsp+A8h] [rbp+7h]
  __int64 v33; // [rsp+B0h] [rbp+Fh]
  int *v34; // [rsp+B8h] [rbp+17h]
  __int64 v35; // [rsp+C0h] [rbp+1Fh]

  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v3 = *(_QWORD *)(a1 + 696);
  v4 = (_QWORD *)(a1 + 704);
  v5 = 0;
  v26 = MillisecondCounter;
  v6 = MillisecondCounter;
  if ( v3 || *v4 )
  {
    v7 = (unsigned int)BufferChunkSizeInPages;
    v8 = *v4 / (unsigned __int64)(unsigned int)BufferChunkSizeInPages;
    *(_QWORD *)(a1 + 240) = 0LL;
    v9 = v8;
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 280) = 0LL;
    v10 = IopLiveDumpGetMillisecondCounter(0);
    v11 = v3 / v7;
    v12 = (_QWORD *)(a1 + 232);
    v13 = HvlPrepareLivedumpDescriptor(
            *(_QWORD *)(a1 + 752) + 8 * *(_QWORD *)(a1 + 216),
            v11,
            v9,
            a1 + 256,
            a1 + 232,
            a1 + 224,
            (_QWORD *)(a1 + 264),
            (_QWORD *)(a1 + 256),
            a1 + 208);
    *(_QWORD *)(a1 + 296) = IopLiveDumpGetMillisecondCounter(0) - v10;
    if ( v13 >= 0 )
    {
      v15 = *v12 << 12;
      v16 = *(_QWORD *)(a1 + 224) << 12;
      *(_QWORD *)(a1 + 224) = v16;
      v17 = *(_QWORD *)(a1 + 256);
      *v12 = v15;
      v18 = v17 << 12;
      *(_QWORD *)(a1 + 256) = v18;
      *(_QWORD *)(a1 + 264) <<= 12;
      v19 = (unsigned int)BufferChunkSizeInBytes;
      if ( v16 % (unsigned int)BufferChunkSizeInBytes )
        *(_QWORD *)(a1 + 248) = *(_QWORD *)(a1 + 216) + v16 / (unsigned int)BufferChunkSizeInBytes;
      if ( v18 % v19 )
        *(_QWORD *)(a1 + 280) = *(_QWORD *)(a1 + 216) + v18 / v19;
    }
    else
    {
      *(_DWORD *)(a1 + 80) |= 0x4000u;
      *(_QWORD *)(a1 + 696) = 0LL;
      *v4 = 0LL;
      IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure(v13);
      if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL) )
      {
        v28 = 0x1000000LL;
        v30 = &v28;
        v14 = (*(_DWORD *)(a1 + 80) & 0x4000) != 0;
        v31 = 8LL;
        v25 = v14;
        v33 = 1LL;
        v32 = &v25;
        v34 = &v27;
        v27 = v13;
        v35 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C06280,
          (unsigned __int8 *)&byte_14002C16F,
          (const GUID *)(a1 + 968),
          (const GUID *)(a1 + 952),
          5u,
          &v29);
      }
    }
    v6 = v26;
  }
  v20 = *(_QWORD *)(a1 + 136);
  if ( v20 )
  {
    v21 = v20 << 12;
    IndependentPages = MmAllocateIndependentPagesEx(v21, -1, 0LL, 0);
    *(_QWORD *)(a1 + 144) = IndependentPages;
    if ( IndependentPages )
    {
      *(_DWORD *)(a1 + 152) = v21;
      if ( IopLiveDumpIsUnderMemoryPressure(a1) )
      {
        v5 = -1073741248;
      }
      else
      {
        IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 144), v21);
        v23 = *(void **)(a1 + 144);
        *(_QWORD *)(a1 + 176) = v23;
        *(_DWORD *)(a1 + 184) = 0;
        memset(v23, 0, v21);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 176) = 0LL;
      *(_DWORD *)(a1 + 184) = 0;
      *(_DWORD *)(a1 + 152) = 0;
    }
  }
  *(_QWORD *)(a1 + 776) = IopLiveDumpGetMillisecondCounter(0) - v6;
  return v5;
}
