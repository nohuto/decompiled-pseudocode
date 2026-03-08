/*
 * XREFs of ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0294140
 * Callers:
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
  {
    result = FreeTmpBuffer(v4, a2, a3);
    *a1 = 0LL;
  }
  return result;
}
