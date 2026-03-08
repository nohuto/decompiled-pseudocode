/*
 * XREFs of VidSchUpdateOverlayPlaneAttributes @ 0x1C0040C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchUpdateOverlayPlaneAttributes(__int64 a1, unsigned int a2, __int128 *a3, unsigned int a4)
{
  __m128i v4; // xmm1
  int v5; // esi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]
  __m128i v12; // [rsp+58h] [rbp-20h]

  v4 = (__m128i)a3[1];
  v5 = *((_DWORD *)a3 + 8);
  v7 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = a4;
  v11 = *a3;
  v12 = v4;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v9 = 288 * v8;
  *(_OWORD *)(*(_QWORD *)(a1 + 8 * v7 + 3200) + v9 + 152) = v11;
  *(_QWORD *)(*(_QWORD *)(a1 + 8 * v7 + 3200) + v9 + 168) = v12.m128i_i64[0];
  *(_DWORD *)(*(_QWORD *)(a1 + 8 * v7 + 3200) + v9 + 180) = v12.m128i_i32[3];
  *(_DWORD *)(*(_QWORD *)(a1 + 8 * v7 + 3200) + v9 + 176) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
  *(_DWORD *)(*(_QWORD *)(a1 + 8 * v7 + 3200) + v9 + 184) = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
