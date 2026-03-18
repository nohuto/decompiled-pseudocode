/*
 * XREFs of NVMeSplitIoCommandCompletion @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSplitIoCommandCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r11
  unsigned int v17; // edx
  __int64 v18; // r9
  unsigned int v19; // edx
  char v20; // al
  unsigned int v21; // r8d
  _QWORD *v22; // r9
  __int64 v23; // rax
  bool v24; // cc
  unsigned __int64 v25; // [rsp+38h] [rbp+10h] BYREF

  result = GetSrbExtension(a2);
  v6 = result;
  if ( *(_BYTE *)(v5 + 3) == 1 )
  {
    if ( *(_BYTE *)(v5 + 2) == 40 )
    {
      v7 = 60LL;
      v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    }
    else
    {
      v8 = *(_BYTE *)(a2 + 7);
      v7 = 16LL;
    }
    v9 = *(_QWORD *)(a1 + 8LL * v8 + 1752);
    LODWORD(v25) = *(_DWORD *)(result + 4136);
    v10 = *(_DWORD *)(v9 + 52);
    HIDWORD(v25) = *(_DWORD *)(result + 4140);
    v11 = (unsigned __int16)*(_DWORD *)(result + 4144) + 1;
    v12 = (v10 + *(_DWORD *)(a2 + v7) - 1) / v10 - v11;
    v25 += v11;
    v13 = HIDWORD(v25);
    *(_DWORD *)(result + 4136) = v25;
    *(_DWORD *)(result + 4140) = v13;
    *(_WORD *)(result + 4144) = v12 - 1;
    v14 = v10 * v11;
    v15 = *(_QWORD *)(result + 4120);
    v16 = (v14 + (unsigned __int64)(v15 & 0xFFF)) >> 12;
    v17 = ((v14 + v15) & 0xFFF) + v10 * v12 + 4095;
    v18 = ((_DWORD)v14 + (_DWORD)v15) & 0xFFF;
    v19 = v17 >> 12;
    if ( (_DWORD)v16 )
    {
      *(_QWORD *)(result + 4120) = v18 + *(_QWORD *)(result + 8LL * (unsigned int)(v16 - 1));
      if ( v19 == 1 )
      {
LABEL_6:
        *(_QWORD *)(result + 4128) = 0LL;
LABEL_7:
        *(_BYTE *)(a2 + 3) = 0;
        v20 = *(_BYTE *)(v6 + 4253);
        *(_QWORD *)(v6 + 4224) = 0LL;
        *(_BYTE *)(v6 + 4253) = v20 & 0xF8 | 6;
        return ProcessCommand(a1, a2);
      }
      if ( v19 == 2 )
      {
        *(_QWORD *)(result + 4128) = *(_QWORD *)(result + 8LL * (unsigned int)v16);
        goto LABEL_7;
      }
      v21 = 0;
      v22 = (_QWORD *)result;
      do
      {
        v23 = v21 + (unsigned int)v16;
        ++v21;
        *v22++ = *(_QWORD *)(v6 + 8 * v23);
      }
      while ( v21 < v19 - 1 );
    }
    else
    {
      *(_QWORD *)(result + 4120) = v18 + (v15 & 0xFFFFFFFFFFFFF000uLL);
      if ( v19 == 1 )
        goto LABEL_6;
      v24 = v19 <= 2;
      if ( v19 != 2 )
      {
LABEL_13:
        if ( !v24 )
        {
          LODWORD(v25) = 0;
          *(_QWORD *)(v6 + 4128) = StorPortGetPhysicalAddress(a1, a2, v6, &v25);
        }
        goto LABEL_7;
      }
      *(_QWORD *)(result + 4128) = *(_QWORD *)result;
    }
    v24 = v19 <= 2;
    goto LABEL_13;
  }
  *(_BYTE *)(result + 4253) |= 8u;
  return result;
}
