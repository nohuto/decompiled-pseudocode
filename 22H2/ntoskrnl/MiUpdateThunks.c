/*
 * XREFs of MiUpdateThunks @ 0x140A92C6C
 * Callers:
 *     MiBootImageRelocated @ 0x140A92B80 (MiBootImageRelocated.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 */

void __fastcall MiUpdateThunks(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rbp
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // r14
  unsigned __int64 *v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  ULONG Size; // [rsp+58h] [rbp+20h] BYREF

  Size = 0;
  v4 = a2 + (unsigned int)(a4 - 1);
  v5 = (__int64 *)(a1 + 16);
  v6 = *(__int64 **)(a1 + 16);
  v7 = a3 - a2;
  while ( v6 != v5 )
  {
    v9 = (unsigned __int64 *)RtlImageDirectoryEntryToData((PVOID)v6[6], 1u, 0xCu, &Size);
    if ( v9 )
    {
      Size >>= 3;
      v10 = Size;
      if ( Size )
      {
        do
        {
          v11 = *v9;
          if ( *v9 >= a2 && v11 <= v4 )
            *v9 = v7 + v11;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
    }
    v6 = (__int64 *)*v6;
  }
}
