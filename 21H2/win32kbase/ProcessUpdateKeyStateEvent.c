/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1C0089CC0
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C0089B30 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall ProcessUpdateKeyStateEvent(__int64 a1, char *a2, _BYTE *a3)
{
  _BYTE *v5; // rdi
  int i; // r11d
  int v7; // ebx
  char v8; // si
  unsigned __int64 v9; // r10
  char v10; // r15
  unsigned __int64 v11; // r10
  int v12; // r8d
  char v13; // cl
  int v14; // r8d
  char v15; // cl
  int v16; // r8d

  v5 = a3;
  for ( i = 0; i < 32; ++i )
  {
    if ( *v5 )
    {
      v7 = 0;
      v8 = 8 * i;
      do
      {
        v9 = (unsigned __int8)(v7 + v8);
        if ( ((unsigned __int8)(1 << ((v7 + v8) & 7)) & a3[v9 >> 3]) != 0 )
        {
          v10 = v9 & 3;
          v11 = v9 >> 2;
          v12 = *(unsigned __int8 *)(v11 + a1 + 228);
          v13 = 2 * v10;
          if ( ((unsigned __int8)(1 << (2 * v10)) & (unsigned __int8)a2[v11]) != 0 )
            v14 = v12 | (1 << v13);
          else
            v14 = v12 & ~(1 << v13);
          v15 = 2 * v10 + 1;
          *(_BYTE *)(v11 + a1 + 228) = v14;
          if ( ((unsigned __int8)(1 << v15) & (unsigned __int8)a2[v11]) != 0 )
            v16 = (unsigned __int8)v14 | (1 << v15);
          else
            v16 = (unsigned __int8)v14 & ~(1 << v15);
          *(_BYTE *)(v11 + a1 + 228) = v16;
        }
        ++v7;
      }
      while ( v7 < 8 );
    }
    ++v5;
  }
  ++*((_DWORD *)gpsi + 1746);
  if ( a2 != (char *)&gafAsyncKeyState )
  {
    if ( a2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        a2);
  }
}
