char __fastcall SetOrClrWF(int a1, __int64 *a2, unsigned __int16 a3, int a4)
{
  int v4; // edi
  _QWORD *v5; // rbx
  int v6; // r12d
  int v7; // r13d
  unsigned __int64 v9; // rdx
  int v10; // eax
  char v11; // r8
  int v12; // esi
  int v13; // ecx
  int v14; // r15d
  int v15; // edx
  int v16; // edi
  int v17; // ebx
  __int64 v18; // r13
  __int64 v19; // rcx
  void *v20; // r12
  __int64 v21; // rcx
  _OWORD v23[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  int v25; // [rsp+48h] [rbp-18h]
  __int64 v26; // [rsp+4Ch] [rbp-14h]
  int v27; // [rsp+54h] [rbp-Ch]
  int v28; // [rsp+58h] [rbp-8h]

  v4 = 0;
  v5 = a2 + 5;
  v6 = 0;
  v7 = 0;
  if ( a4 )
  {
    v4 = *(_DWORD *)(*v5 + 28LL);
    v6 = *(_DWORD *)(*v5 + 24LL);
    v7 = *(_DWORD *)(*v5 + 232LL);
  }
  v9 = *v5 + ((unsigned __int64)a3 >> 8);
  LOBYTE(v10) = *(_BYTE *)(v9 + 16);
  if ( a1 )
    v11 = v10 | a3;
  else
    v11 = v10 & ~(_BYTE)a3;
  *(_BYTE *)(v9 + 16) = v11;
  if ( a4 )
  {
    v10 = IsWindowDesktopComposed(a2);
    if ( v10 )
    {
      v12 = *(_DWORD *)(*v5 + 28LL);
      v13 = *(_DWORD *)(*v5 + 24LL);
      v14 = v4 ^ v12;
      v15 = *(_DWORD *)(*v5 + 232LL);
      v16 = v6 ^ v13;
      v10 = v7 ^ v15;
      if ( !v14 )
      {
        if ( v16 )
          goto LABEL_13;
        if ( !v10 )
          return v10;
      }
      if ( (v14 & 0xB1CF0000) != 0 )
      {
        v17 = -16;
        goto LABEL_18;
      }
LABEL_13:
      if ( (v16 & 0x4E27A9) != 0 )
      {
        v17 = -20;
        v12 = v13;
      }
      else
      {
        if ( (v10 & 0x12C0) == 0 )
        {
LABEL_15:
          LOBYTE(v10) = (v14 & 0xC40000) == 0;
          if ( (((v16 & 0x200A0381) == 0) & (unsigned __int8)v10) == 0 )
            LOBYTE(v10) = WindowMargins::CheckForChanges(a2, 1LL);
          return v10;
        }
        v17 = -268435456;
        v12 = v15;
      }
LABEL_18:
      DirtyVisRgnTrackers(a2);
      v18 = *a2;
      v20 = (void *)ReferenceDwmApiPort(v19);
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v21) + 32) + 13248LL));
      if ( v20 )
      {
        v28 = v12;
        memset(v23, 0, sizeof(v23));
        LODWORD(v23[0]) = 3932180;
        v24 = 0LL;
        WORD2(v23[0]) = 0x8000;
        v25 = 1073741846;
        v26 = v18;
        v27 = v17;
        LpcRequestPort(v20, v23);
        ObfDereferenceObject(v20);
      }
      goto LABEL_15;
    }
  }
  return v10;
}
