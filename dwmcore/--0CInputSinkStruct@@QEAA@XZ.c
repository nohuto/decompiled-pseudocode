/*
 * XREFs of ??0CInputSinkStruct@@QEAA@XZ @ 0x1800E57C0
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800E53C4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CInputSinkStruct *__fastcall CInputSinkStruct::CInputSinkStruct(CInputSinkStruct *this)
{
  __int64 v1; // rdi
  int v3; // eax
  CInputSinkStruct *v4; // rdx

  v1 = 4LL;
  `vector constructor iterator'(
    (char *)this,
    16LL,
    4LL,
    (void (__fastcall *)(char *))CInputSinkStruct::InputQueueInfo::InputQueueInfo);
  v3 = 1;
  *((_BYTE *)this + 104) = 0;
  v4 = this;
  do
  {
    *(_DWORD *)v4 = v3++;
    v4 = (CInputSinkStruct *)((char *)v4 + 16);
    --v1;
  }
  while ( v1 );
  return this;
}
