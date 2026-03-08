/*
 * XREFs of ObpInitStackTrace @ 0x140B6E2C0
 * Callers:
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpInitStackAndObjectTables @ 0x140979F68 (ObpInitStackAndObjectTables.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

int ObpInitStackTrace()
{
  int v0; // ebx
  __int64 Pool2; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int16 v4; // bx
  unsigned int v5; // edi
  unsigned int v6; // edx
  int *v7; // r9
  unsigned int i; // r8d
  int v9; // r10d
  unsigned int v10; // r11d
  int v11; // eax
  int v12; // ecx

  ObpStackTraceLock = 0LL;
  ObpPushStackInfoWorkItem.Parameter = 0LL;
  ObpPushStackInfoWorkItem.List.Flink = 0LL;
  ObpPushStackInfoList = 0LL;
  v0 = 0;
  ObpPushStackInfoWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpPushStackInfoQueue;
  memset(&ObpRegTracePoolTags, 0, 0x40uLL);
  LODWORD(Pool2) = (unsigned int)memset(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
  v2 = -1LL;
  ObpNumTracedObjects = 0;
  ObpStackSequence = 0;
  if ( ObpTraceProcessNameBuffer[0] )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( ObpTraceProcessNameBuffer[v3] );
    v4 = 2 * v3;
    Pool2 = ExAllocatePool2(64LL, v4 + 2LL, 0x7452624Fu);
    ObpRegTraceProcessName.Buffer = (wchar_t *)Pool2;
    if ( !Pool2 )
      return Pool2;
    ObpRegTraceProcessName.Length = v4;
    ObpRegTraceProcessName.MaximumLength = v4 + 2;
    LODWORD(Pool2) = (unsigned int)memmove((void *)Pool2, ObpTraceProcessNameBuffer, (unsigned __int16)(v4 + 2));
    v0 = 32;
  }
  if ( ObpTracePoolTagsBuffer[0] )
  {
    do
      ++v2;
    while ( ObpTracePoolTagsBuffer[v2] );
    v5 = v2 + 1;
    LODWORD(Pool2) = -858993459 * v5;
    v6 = v5 / 5;
    if ( v5 / 5 <= 0x10 )
    {
      if ( !v6 )
      {
LABEL_17:
        v0 |= 0x10u;
        goto LABEL_3;
      }
    }
    else
    {
      v6 = 16;
    }
    v7 = (int *)&ObpRegTracePoolTags;
    for ( i = 0; i < v6; ++i )
    {
      v9 = *v7;
      v10 = 0;
      do
      {
        v11 = 5 * i - v10++;
        Pool2 = (unsigned int)(v11 + 3);
        v12 = (v9 << 8) | (unsigned __int16)ObpTracePoolTagsBuffer[Pool2];
        v9 = v12;
      }
      while ( v10 < 4 );
      *v7++ = v12;
    }
    goto LABEL_17;
  }
LABEL_3:
  if ( v0 )
  {
    if ( ObpTracePermanent )
      v0 |= 0x40u;
    LODWORD(Pool2) = ObpInitStackAndObjectTables();
    if ( (int)Pool2 < 0 )
    {
      if ( (v0 & 0x10) != 0 )
        LODWORD(Pool2) = (unsigned int)memset(&ObpRegTracePoolTags, 0, 0x40uLL);
      if ( (v0 & 0x20) != 0 )
      {
        ExFreePoolWithTag(ObpRegTraceProcessName.Buffer, 0x7452624Fu);
        LODWORD(Pool2) = RtlInitUnicodeStringEx(&ObpRegTraceProcessName, 0LL);
      }
    }
    else
    {
      LODWORD(Pool2) = v0 | 1;
      ObpRegTraceFlags = v0 | 1;
      ObpTraceFlags = v0 | 1;
      if ( (v0 & 0x10) != 0 )
        ObpTracePoolTags = (__int64)&ObpRegTracePoolTags;
      if ( (v0 & 0x20) != 0 )
        ObpTraceProcessName = &ObpRegTraceProcessName;
    }
  }
  return Pool2;
}
