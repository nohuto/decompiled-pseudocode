/*
 * XREFs of FormInquiryDeviceIdentifiersData @ 0x1C00122F8
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0019C74 (ScsiInquiryRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     GetNamespaceId @ 0x1C0007A8C (GetNamespaceId.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     GUIDToSCSINameString @ 0x1C00129E8 (GUIDToSCSINameString.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryDeviceIdentifiersData(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  unsigned int v4; // ebx
  _WORD *SrbDataBuffer; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rax
  BOOL v12; // r14d
  unsigned int v13; // ebp
  int v14; // r12d
  unsigned int *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _WORD *v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned __int64 v22; // r8
  unsigned __int16 NamespaceId; // ax
  __int64 v24; // r10
  unsigned __int64 v25; // rcx
  __int64 v26; // r9
  unsigned int *v28; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h]
  _WORD *v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  __int64 v32; // [rsp+50h] [rbp-58h]
  __int128 v33; // [rsp+58h] [rbp-50h]

  v2 = *(_WORD **)(a1 + 1840);
  v32 = a1;
  v4 = 0;
  v30 = v2;
  v28 = 0LL;
  v33 = 0LL;
  SrbDataBuffer = (_WORD *)GetSrbDataBuffer(a2, &v28);
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v8 = *(_BYTE *)(a2 + 7);
  v31 = v8;
  v9 = *(_QWORD *)(v7 + 8LL * v8 + 1952);
  v10 = v9 + 68;
  v11 = *(_QWORD *)(v9 + 68) - v33;
  if ( !v11 )
    v11 = *(_QWORD *)(v9 + 76) - *((_QWORD *)&v33 + 1);
  v29 = v9 + 84;
  v12 = v11 != 0;
  if ( *(_QWORD *)(v9 + 84) == (_QWORD)v33 || v11 )
  {
    v14 = 0;
    v13 = 44;
    if ( !v11 )
      v13 = 76;
  }
  else
  {
    v13 = 28;
    v14 = 1;
  }
  v15 = v28;
  v16 = *v28;
  if ( (unsigned int)v16 >= v13 )
  {
    NVMeZeroMemory(SrbDataBuffer, v16);
    *SrbDataBuffer = -32000;
    *((_BYTE *)SrbDataBuffer + 3) = v13 - 4;
    v17 = 8LL;
    *((_BYTE *)SrbDataBuffer + 4) = SrbDataBuffer[2] & 0xF0 | 3;
    *((_BYTE *)SrbDataBuffer + 5) = *((_BYTE *)SrbDataBuffer + 5) & 0xC0 | 8;
    *((_BYTE *)SrbDataBuffer + 7) = v13 - 8;
    if ( v12 )
    {
      v17 = 16LL;
      v18 = v10;
    }
    else
    {
      if ( !v14 )
      {
        v19 = v30;
        v20 = v32;
        v21 = v31;
        v22 = (unsigned __int16)*v30;
        *((_BYTE *)SrbDataBuffer + 11) = `HexFromUchar'::`2'::hexDigits[*v30 & 0xF];
        *((_BYTE *)SrbDataBuffer + 10) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v22 >> 4];
        *((_BYTE *)SrbDataBuffer + 9) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v22 >> 8) & 0xF];
        *((_BYTE *)SrbDataBuffer + 8) = `HexFromUchar'::`2'::hexDigits[v22 >> 12];
        *(_OWORD *)(SrbDataBuffer + 6) = *(_OWORD *)(v19 + 12);
        *(_OWORD *)(SrbDataBuffer + 14) = *(_OWORD *)(v19 + 20);
        *(_QWORD *)(SrbDataBuffer + 22) = *((_QWORD *)v19 + 7);
        NamespaceId = GetNamespaceId(v20, v21);
        *((_BYTE *)SrbDataBuffer + 55) = *(_BYTE *)((NamespaceId & 0xF) + v24);
        *((_BYTE *)SrbDataBuffer + 54) = *(_BYTE *)((((unsigned __int64)NamespaceId >> 4) & 0xF) + v24);
        v25 = (unsigned __int64)NamespaceId >> 12;
        LOBYTE(NamespaceId) = *(_BYTE *)((((unsigned __int64)NamespaceId >> 8) & 0xF) + v24);
        *((_BYTE *)SrbDataBuffer + 52) = *(_BYTE *)(v25 + v24);
        *((_BYTE *)SrbDataBuffer + 53) = NamespaceId;
        *(_OWORD *)(SrbDataBuffer + 28) = *(_OWORD *)(v26 + 4);
        *((_DWORD *)SrbDataBuffer + 18) = *(_DWORD *)(v26 + 20);
        goto LABEL_19;
      }
      v18 = v29;
    }
    GUIDToSCSINameString(v18, SrbDataBuffer + 4, v17, (unsigned __int8)(v13 - 8));
LABEL_19:
    *v15 = v13;
    *(_BYTE *)(a2 + 3) = 1;
    return v4;
  }
  LOBYTE(v7) = 36;
  LOBYTE(v6) = 5;
  LOBYTE(v16) = 6;
  NVMeSetSenseData(a2, v16, v6, v7);
  return (unsigned int)-1056964602;
}
