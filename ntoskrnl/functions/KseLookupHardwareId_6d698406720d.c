__int64 __fastcall KseLookupHardwareId(WCHAR *SourceString)
{
  WCHAR v1; // r15
  WCHAR *v2; // r14
  ULONG_PTR v3; // rdi
  unsigned int v5; // ebp
  __int16 v6; // ax
  WCHAR *v7; // rcx
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rcx
  _QWORD *i; // r11
  _WORD *v13; // rdx
  UNICODE_STRING v14[2]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-28h]

  v1 = *SourceString;
  v2 = SourceString + 1;
  v3 = qword_140C64A00;
  v16 = 0;
  v5 = -1073741275;
  if ( v1 != 42 )
    v2 = SourceString;
  memset(v14, 0, sizeof(v14));
  v6 = *v2;
  DestinationString = 0LL;
  if ( v6 )
  {
    v7 = v2;
    while ( v6 != 42 && v6 != 63 )
    {
      v6 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    CurrentThread = KeGetCurrentThread();
    v11 = qword_140C64A00;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    for ( i = *(_QWORD **)(v3 + 32); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(v3 + 32) )
        goto LABEL_10;
      v13 = (_WORD *)i[3];
      if ( v1 == 42 )
      {
        if ( *v13 != 42 )
          continue;
        ++v13;
      }
      if ( (unsigned int)AslStringPatternMatchExW((__int16 *)v2, v13) )
      {
        v5 = 0;
        goto LABEL_10;
      }
    }
  }
LABEL_8:
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.Buffer, SourceString);
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  if ( KsepCacheLookup(v3, (__int64)v14) )
    v5 = 0;
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease(v3);
  KeLeaveCriticalRegion();
  return v5;
}
