/*
 * XREFs of ?WriteAllocTableDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z @ 0x1C019D1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::WriteAllocTableDumpBufferCallback(
        NSInstrumentation *this,
        void *a2,
        _DWORD *a3,
        void *a4)
{
  _QWORD *v4; // r9
  unsigned int v5; // eax

  v4 = *(_QWORD **)a3;
  v5 = a3[2];
  if ( *(_QWORD *)a3 )
  {
    if ( v5 >= 0x10 )
    {
      *v4 = this;
      v4[1] = a2;
      a3[2] -= 16;
      *(_QWORD *)a3 = v4 + 2;
    }
  }
  else if ( v5 + 16 < v5 )
  {
    a3[2] = -1;
  }
  else
  {
    a3[2] = v5 + 16;
  }
}
