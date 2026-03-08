/*
 * XREFs of DmrEnumerateRmrrDomains @ 0x14037BD30
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x14037B514 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     DmrFindDrhdForDeviceScope @ 0x14037BC80 (DmrFindDrhdForDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x14037BFAC (DmrGetNextRemappingStructure.c)
 *     DmrGetNextDeviceScope @ 0x14037C0D0 (DmrGetNextDeviceScope.c)
 *     DmrCheckPathMatch @ 0x14037C1AC (DmrCheckPathMatch.c)
 *     DmrpRmrrTreeAddNewScope @ 0x14037C268 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x14037C308 (DmrpRmrrTreeAddRegionToDevice.c)
 *     DmrFreeRmrrTree @ 0x140532C5C (DmrFreeRmrrTree.c)
 */

__int64 __fastcall DmrEnumerateRmrrDomains(__int64 a1, _BYTE *a2, __int64 a3)
{
  _QWORD **v3; // r14
  _BYTE *v4; // rdi
  _WORD *v5; // rdx
  _WORD *NextRemappingStructure; // rax
  __int64 v8; // r11
  _WORD *v9; // rbx
  char *v10; // r13
  char *i; // r8
  char *NextDeviceScope; // rax
  char *v13; // rsi
  char v14; // cl
  _QWORD *v15; // r15
  unsigned __int16 v16; // ax
  __int64 v17; // rdi
  int v18; // edi
  char v20; // bp
  unsigned __int16 v22; // [rsp+88h] [rbp+20h]

  *(_DWORD *)a3 = 0;
  v3 = (_QWORD **)(a3 + 8);
  v4 = a2;
  *(_QWORD *)(a3 + 16) = a3 + 8;
  *(_QWORD *)(a3 + 8) = a3 + 8;
  v5 = 0LL;
  while ( 1 )
  {
    NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v5);
    v9 = NextRemappingStructure;
    if ( !NextRemappingStructure )
      return 0;
    if ( *NextRemappingStructure == 1 )
    {
      v10 = (char *)NextRemappingStructure + (unsigned __int16)NextRemappingStructure[1];
      for ( i = 0LL; ; i = v13 )
      {
        NextDeviceScope = (char *)DmrGetNextDeviceScope(v9 + 12, v10, i);
        v13 = NextDeviceScope;
        if ( !NextDeviceScope )
          break;
        v14 = *NextDeviceScope;
        if ( *NextDeviceScope == 1 )
        {
          if ( v4 )
          {
            if ( DmrFindDrhdForDeviceScope(v8, v9[3], NextDeviceScope) != v4 )
              continue;
            v14 = 1;
          }
          v15 = *v3;
          v16 = v9[3];
          v22 = v16;
          if ( *v3 != v3 )
          {
            v20 = 1;
            do
            {
              v17 = (__int64)v15;
              v15 = (_QWORD *)*v15;
              if ( *(_WORD *)(v17 + 32) == v16 )
              {
                if ( v20 == *(_BYTE *)(v17 + 34) )
                {
                  if ( (unsigned __int8)DmrCheckPathMatch(v13, v17 + 34) )
                    goto LABEL_13;
                  v16 = v22;
                }
                v14 = 1;
              }
              else
              {
                v20 = v14;
              }
            }
            while ( v15 != v3 );
          }
          v17 = DmrpRmrrTreeAddNewScope(a3, v16, v13);
LABEL_13:
          if ( !v17 )
          {
            v18 = -1073741670;
LABEL_29:
            DmrFreeRmrrTree(a3);
            return (unsigned int)v18;
          }
          v18 = DmrpRmrrTreeAddRegionToDevice(v17, *((_QWORD *)v9 + 1), *((_QWORD *)v9 + 2));
          if ( v18 < 0 )
            goto LABEL_29;
          v4 = a2;
        }
      }
    }
    v5 = v9;
    a1 = v8;
  }
}
