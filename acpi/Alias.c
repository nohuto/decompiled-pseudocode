__int64 __fastcall Alias(__int64 a1, __int64 a2)
{
  unsigned int NameSpaceObject; // edi
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  NameSpaceObject = GetNameSpaceObject(
                      *(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      (__int64)&v9,
                      0x80000000);
  if ( !NameSpaceObject )
  {
    v5 = a2 + 64;
    v6 = CreateNameSpaceObject(
           *(_QWORD *)(a1 + 320),
           *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 72LL),
           *(_QWORD *)(a1 + 80),
           *(struct _EX_RUNDOWN_REF **)(a1 + 88),
           (__int64 *)(a2 + 64),
           0);
    v7 = v9;
    NameSpaceObject = v6;
    if ( !v6 )
    {
      *(_WORD *)(*(_QWORD *)v5 + 66LL) = 128;
      *(_QWORD *)(*(_QWORD *)v5 + 80LL) = v7;
    }
    DereferenceObjectEx(v7);
  }
  return NameSpaceObject;
}
