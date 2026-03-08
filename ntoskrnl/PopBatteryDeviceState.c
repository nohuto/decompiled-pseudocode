/*
 * XREFs of PopBatteryDeviceState @ 0x1409920CC
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PopBatteryDeviceState(wchar_t *a1, __int64 a2)
{
  signed int v3; // ebx
  __int64 v4; // r8
  wchar_t *v5; // rax
  unsigned __int16 Length; // di
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rax
  __int64 v9; // rdi
  __m128i v10; // xmm0
  __int64 v11; // rbx
  __int128 v12; // xmm0
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v15; // [rsp+30h] [rbp-10h] BYREF

  v3 = 0;
  String2 = 0LL;
  if ( !a1 )
    goto LABEL_7;
  v4 = 0x7FFFLL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v3 = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    String2.Buffer = a1;
    Length = 2 * (0x7FFF - v4);
    String2.Length = Length;
    String2.MaximumLength = Length + 2;
  }
  else
  {
LABEL_7:
    Length = String2.Length;
  }
  if ( v3 >= 0 )
  {
    if ( Length > 8u
      && (RtlPrefixUnicodeString(&PopDevicePrefixNt, &String2, 0)
       || RtlPrefixUnicodeString(&PopDevicePrefixWin32, &String2, 0)) )
    {
      CurrentThread = KeGetCurrentThread();
      String2.Buffer += 4;
      String2.MaximumLength -= 8;
      String2.Length = Length - 8;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopCB, 0LL);
      v9 = qword_140C3CB60;
      if ( (__int64 *)qword_140C3CB60 == &qword_140C3CB60 )
        goto LABEL_20;
      do
      {
        v10 = *(__m128i *)(v9 + 32);
        v11 = v9;
        *(_QWORD *)&v15.Length = *(_QWORD *)(v9 + 32);
        v15.Length -= 8;
        v15.MaximumLength -= 8;
        v15.Buffer = (wchar_t *)(_mm_srli_si128(v10, 8).m128i_u64[0] + 8);
        if ( RtlEqualUnicodeString(&String2, &v15, 1u) )
          break;
        v9 = *(_QWORD *)v9;
        v11 = 0LL;
      }
      while ( (__int64 *)v9 != &qword_140C3CB60 );
      if ( !v11 )
      {
LABEL_20:
        v3 = -1073741772;
      }
      else if ( *(_DWORD *)(v11 + 104) == 3 )
      {
        *(_OWORD *)a2 = *(_OWORD *)(v11 + 112);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v11 + 128);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(v11 + 144);
        v12 = *(_OWORD *)(v11 + 148);
        v3 = 0;
        *(_OWORD *)(a2 + 36) = v12;
      }
      else
      {
        v3 = -1073741661;
      }
      PopReleaseRwLock((ULONG_PTR)&PopCB);
      PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
    }
    else
    {
      return (unsigned int)-1073741773;
    }
  }
  return (unsigned int)v3;
}
