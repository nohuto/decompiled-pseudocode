/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C0063600 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C02E518C (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C02E523C (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0022D20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0022F70 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0028D70 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0028F60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C008B6B4 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C008E678 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C00AD9C8 (HmgFreeObjectAttr.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00ADAA4 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x1C00D8B50 (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0168DA4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v9; // rax
  ULONG_PTR v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  char v17; // r15
  __int64 ObjectAttr; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v24; // r13
  __int64 ProcessWow64Process; // rax
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // r8
  __int64 v30; // [rsp+38h] [rbp-80h] BYREF
  int v31; // [rsp+40h] [rbp-78h]
  struct BRUSH *v32; // [rsp+50h] [rbp-68h]
  __int64 v33; // [rsp+58h] [rbp-60h]
  _BYTE v35[80]; // [rsp+68h] [rbp-50h] BYREF

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>::UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>((char *)this + 16);
  if ( a3 <= 0xC )
  {
    v9 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v10 = (ULONG_PTR)v9;
    v32 = v9;
    *(_QWORD *)this = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 19) = a2;
      *((_DWORD *)v9 + 20) = a3;
      *((_QWORD *)v9 + 3) = 0LL;
      **((_DWORD **)v9 + 6) = 0;
      if ( a3 >= 6 )
      {
        v11 = a3 - 6;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v16 = v15 - 1;
                  if ( v16 )
                  {
                    if ( v16 == 1 )
                      *((_DWORD *)v9 + 10) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v9 + 10) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v9 + 10) = 18;
                }
              }
              else
              {
                *((_DWORD *)v9 + 10) = 21;
              }
            }
            else
            {
              *((_DWORD *)v9 + 10) = 17;
            }
          }
          else
          {
            *((_DWORD *)v9 + 10) = 20;
          }
        }
        else
        {
          *((_DWORD *)v9 + 10) = 16;
        }
      }
      else
      {
        *((_DWORD *)v9 + 10) = 32802;
      }
      v17 = 0;
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v35);
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v35, (struct OBJECT *)v10, 1u, 0, 0x10u) )
      {
        if ( a5 )
        {
          ObjectAttr = HmgAllocateObjectAttr();
          v33 = ObjectAttr;
          if ( ObjectAttr )
          {
            v30 = 0LL;
            v31 = 0;
            LOBYTE(v19) = 16;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v30, *(struct HOBJ__ **)v10, v19);
            if ( v31 )
            {
              *(_QWORD *)ObjectAttr = *(_QWORD *)(v10 + 72);
              CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(1LL, v20, v21, v22);
              v24 = CurrentProcessWin32Process;
              if ( !CurrentProcessWin32Process )
                KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
              ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
              v26 = *((unsigned int *)v24 + 73);
              v27 = *((_DWORD *)v24 + 73);
              if ( ProcessWow64Process )
                v28 = (unsigned int)__ROR4__(ObjectAttr ^ v26, v27 & 0x1F);
              else
                v28 = __ROR8__(ObjectAttr ^ v26, v27 & 0x3F);
              *(_QWORD *)(v30 + 16) = v28;
              *(_QWORD *)(v10 + 48) = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
            }
            HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v30);
          }
        }
      }
      else
      {
        v17 = 1;
        *(_QWORD *)this = 0LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v35);
      if ( v17 )
        FreeBrushMemory(v10);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
