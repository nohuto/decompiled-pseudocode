/*
 * XREFs of ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C001EB70
 * Callers:
 *     GreDwmGetSurfaceData @ 0x1C0029774 (GreDwmGetSurfaceData.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C001EC6C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::GetSoSurfaceData(SFMLOGICALSURFACE *this, struct tagDWMSURFACEDATA *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rdx
  struct _ACCESS_STATE *ObjectType; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  void *v13; // rcx

  v4 = SGDGetSessionState(this);
  v5 = (_DWORD *)*((_QWORD *)this + 23);
  LODWORD(ObjectType) = 0;
  v7 = *(_QWORD *)(v4 + 32);
  if ( !v5 )
  {
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 68);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this + 69);
    *((_DWORD *)a2 + 3) = 6;
    goto LABEL_14;
  }
  *((_DWORD *)a2 + 1) = v5[8];
  *((_DWORD *)a2 + 2) = v5[9];
  *((_DWORD *)a2 + 3) = v5[18];
  *((_DWORD *)a2 + 4) = v5[16];
  v8 = *((_QWORD *)this + 23);
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = 0LL;
  *((_QWORD *)a2 + 3) = v9;
  if ( v5[18] != 6 )
  {
LABEL_11:
    *(_DWORD *)a2 = (_DWORD)ObjectType;
LABEL_14:
    v11 = *(_QWORD *)(v7 + 20128);
    goto LABEL_7;
  }
  if ( !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(this) )
  {
    v13 = (void *)v10[28];
    if ( v13 )
    {
      *(_DWORD *)a2 = 1;
      *((_QWORD *)a2 + 4) = *(_QWORD *)(v7 + 20128);
      LODWORD(ObjectType) = ObOpenObjectByPointer(
                              v13,
                              0,
                              ObjectType,
                              6u,
                              (POBJECT_TYPE)ObjectType,
                              (KPROCESSOR_MODE)ObjectType,
                              (PHANDLE)a2 + 5);
      return (unsigned int)ObjectType;
    }
    goto LABEL_11;
  }
  *(_DWORD *)a2 = 2;
  *((_QWORD *)a2 + 5) = v10[68];
  v11 = v10[69];
LABEL_7:
  *((_QWORD *)a2 + 4) = v11;
  return (unsigned int)ObjectType;
}
